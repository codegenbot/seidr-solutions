#include <iostream>
#include <vector>
#include <string>
#include <cassert>

namespace solution_name {
    int count_odd_digits(const std::string &num) {
        int count = 0;
        for (char c : num) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        return count;
    }

    std::vector<std::string> odd_count(const std::vector<std::string> &numbers) {
        std::vector<std::string> result;
        for (const auto &num : numbers) {
            int odd_digits = count_odd_digits(num);
            result.push_back("the number of odd elements " + std::to_string(odd_digits) +
                             "\nthe string " + num + " of the input.");
        }
        return result;
    }

    bool issame(const std::vector<std::string> &first, const std::vector<std::string> &second) {
        if (first.size() != second.size()) {
            return false;
        }
        for (size_t i = 0; i < first.size(); ++i) {
            if (first[i] != second[i]) {
                return false;
            }
        }
        return true;
    }
}

int main() {
    assert(solution_name::issame(solution_name::odd_count({"271", "137", "314"}),
                                 { "the number of odd elements 2\nthe string 271 of the input.",
                                   "the number of odd elements 2\nthe string 137 of the input.",
                                   "the number of odd elements 2\nthe string 314 of the input."}));
    return 0;
}