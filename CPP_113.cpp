#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

namespace solution_name {
    int count_odd_digits(const std::string& str) {
        return std::count_if(str.begin(), str.end(), [](char c) { return c >= '0' && c <= '9' && (c - '0') % 2 != 0; });
    }

    std::vector<std::string> odd_count(const std::vector<std::string>& input);

    std::vector<std::string> odd_count(const std::vector<std::string>& input) {
        std::vector<std::string> result;
        for (const std::string& str : input) {
            int num_odd_digits = count_odd_digits(str);
            result.push_back("the number of odd elements " + std::to_string(num_odd_digits) +
                             "\nthe string " + str + " of the input.");
        }
        return result;
    }

    bool issame(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2) {
        return std::equal(vec1.begin(), vec1.end(), vec2.begin());
    }
}

int main() {
    assert(solution_name::issame(solution_name::odd_count({"271", "137", "314"}),
                                 { "the number of odd elements 2\nthe string 271 of the input.",
                                   "the number of odd elements 2\nthe string 137 of the input.",
                                   "the number of odd elements 2\nthe string 314 of the input."}));
    return 0;
}