#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

namespace solution_name {
    int count_odd_digits(const std::string& num) {
        return std::count_if(num.begin(), num.end(), [](char c) { return c % 2 != 0; });
    }

    std::vector<std::string> odd_count(const std::vector<std::string>& input) {
        std::vector<std::string> result;
        for (const std::string& num : input) {
            result.push_back("the number of odd elements " + std::to_string(count_odd_digits(num)) +
                             "\nthe string " + num + " of the input.");
        }
        return result;
    }

    bool issame(const std::vector<std::string>& actual, const std::vector<std::string>& expected) {
        return actual == expected;
    }
}

std::vector<std::string> solution_name::odd_count(const std::vector<std::string>& input);

int main() {
    assert(solution_name::issame(solution_name::odd_count({"271", "137", "314"}), {
        "the number of odd elements 2\nthe string 271 of the input.",
        "the number of odd elements 2\nthe string 137 of the input.",
        "the number of odd elements 1\nthe string 314 of the input."
    }));

    return 0;
}