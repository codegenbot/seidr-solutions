#include <iostream>
#include <cassert>
#include <vector>
#include <string>

namespace solution_name {
    int count_odd(const std::string& str) {
        int count = 0;
        for (char c : str) {
            if (c >= '0' && c <= '9' && (c - '0') % 2 != 0) {
                count++;
            }
        }
        return count;
    }

    std::vector<std::string> odd_count(const std::vector<std::string>& input) {
        std::vector<std::string> result;
        for (const std::string& str : input) {
            int odd = count_odd(str);
            result.push_back("the number of odd elements " + std::to_string(odd) +
                             "\nthe string " + str + " of the input.");
        }
        return result;
    }

    bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
        return v1 == v2;
    }
}

int main() {
    assert(solution_name::issame(solution_name::odd_count({"271", "137", "314"}), {
        "the number of odd elements 2\nthe string 271 of the input.",
        "the number of odd elements 2\nthe string 137 of the input.",
        "the number of odd elements 2\nthe string 314 of the input."
    }));
    return 0;
}