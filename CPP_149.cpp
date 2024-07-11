```cpp
#include <algorithm>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::string& b) {
    return a == std::vector<std::string>(1, b);
}

std::vector<std::string> sorted_list_sum(std::vector<std::vector<std::string>> lst) { 
    if (lst.empty()) {
        return {};
    }

    std::vector<std::string> result;

    for (const auto& inner : lst) {
        for (const auto& str : inner) {
            if (str.length() % 2 == 0) {
                result.push_back(str);
            }
        }
    }

    if (result.empty()) {
        throw std::runtime_error("The input list is empty or contains only odd-length strings.");
    }

    std::sort(result.begin(), result.end(),
              [](const std::string& a, const std::string& b) { 
                  if (a.size() != b.size()) {
                      return a.size() < b.size();
                  } else {
                      return a < b;
                  }
              });

    return result;
}

int main() {
    std::vector<std::vector<std::string>> lst = {{ "aaaa" }, { "bbbb" }, { "dd" }, { "cc" }};
    std::cout << "Sorted List: ";
    for (const auto& str : sorted_list_sum(lst)) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
}