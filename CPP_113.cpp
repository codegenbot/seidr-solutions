#include <iostream>
#include <vector>
#include <string>
#include <cassert>

namespace solution_name {
    int count_odd(const std::string& str) {
        int odd_count = 0;
        for (char ch : str) {
            if (isdigit(ch) && (ch - '0') % 2 != 0) {
                odd_count++;
            }
        }
        return odd_count;
    }

    std::vector<std::string> odd_count(const std::vector<std::string>& input) {
        std::vector<std::string> result;
        for (const std::string& str : input) {
            int count = count_odd(str);
            result.push_back("the number of odd elements " + std::to_string(count) + "\nthe string " + str + " of the input.");
        }
        return result;
    }

    bool issame(const std::vector<std::string>& actual, const std::vector<std::string>& expected) {
        if (actual.size() != expected.size()) {
            return false;
        }

        for (size_t i = 0; i < actual.size(); ++i) {
            if (actual[i] != expected[i]) {
                return false;
            }
        }

        return true;
    }
}

int main() {
    assert(solution_name::issame(solution_name::odd_count({"271", "137", "314"}),
                                  {"the number of odd elements 2\nthe string 271 of the input.",
                                   "the number of odd elements 2\nthe string 137 of the input.",
                                   "the number of odd elements 2\nthe string 314 of the input."}));
    return 0;
}