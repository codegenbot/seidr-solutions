```cpp
#include <algorithm>
#include <vector>
#include <string>

bool issame(const std::vector<std::vector<std::string>>& a, const std::vector<std::vector<std::string>>& b) {
    return a == b;
}

std::vector<std::string> sorted_list_sum(std::vector<std::vector<std::string>> lst) { 
    if (lst.empty()) {
        return {};
    }

    std::vector<std::string> result;

    for (const auto& vec : lst) {
        for (const auto& str : vec) {
            if (str.length() % 2 == 0) {
                result.push_back(str);
                break;
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
    std::vector<std::string> input = {"aaaa", "bbbb", "dd", "cc"};
    std::vector<std::vector<std::string>> lst = {{input[0], input[1]}, {input[2], input[3]}};
    assert(issame(sorted_list_sum(lst), sorted_list_sum({{input[2], input[3]}, {input[0], input[1]}})));
    return 0;
}