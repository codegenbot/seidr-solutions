```cpp
#include <algorithm>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::vector<std::string>> input = {{"aaaa"}, {"bbbb"}, {"dd"}, {"cc"}};

std::vector<std::string> sorted_list_sum(std::vector<std::vector<std::string>> lst) { 
    if (lst.empty()) {
        return {};
    }

    std::vector<std::string> result;

    for (const auto& sub_lst : lst) {
        bool found_odd = false;
        for (const auto& str : sub_lst) {
            if (str.length() % 2 != 0) {
                found_odd = true;
                break;
            }
        }

        if (!found_odd) {
            for (const auto& str : sub_lst) {
                result.push_back(str);
            }
        }
    }

    if (result.empty()) {
        throw std::runtime_error("The input list is empty or contains only strings with even lengths.");
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
    assert(issame(sorted_list_sum(input), {"cc", "dd", "aaaa", "bbbb"}));
}