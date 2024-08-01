#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> by_length(const std::vector<int>& input) {
    std::vector<std::string> result;

    std::vector<std::pair<int, std::string>> num_string_pairs;
    for (int num : input) {
        std::string str_num;
        if (num == 1) {
            str_num = "One";
        } else if (num == 2) {
            str_num = "Two";
        } else if (num == 3) {
            str_num = "Three";
        } else if (num == 4) {
            str_num = "Four";
        } else if (num == 7) {
            str_num = "Seven";
        } else if (num == 9) {
            str_num = "Nine";
        }
        num_string_pairs.emplace_back(num, str_num);
    }

    std::sort(num_string_pairs.begin(), num_string_pairs.end(),
              [](const std::pair<int, std::string>& a, const std::pair<int, std::string>& b) {
                  return a.second.length() < b.second.length();
              });

    for (const auto& pair : num_string_pairs) {
        result.push_back(pair.second);
    }

    return result;
}

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Four", "Eight"}));
    return 0;
}