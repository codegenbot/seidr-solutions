#include <iostream>
#include <vector>
#include <string>
#include <cassert>

namespace solution_name {
    int count_odds(const std::string& input) {
        int count = 0;
        for (char c : input) {
            if (c >= '0' && c <= '9' && (c - '0') % 2 == 1) {
                count++;
            }
        }
        return count;
    }

    std::vector<std::string> odd_count(const std::vector<std::string>& inputs) {
        std::vector<std::string> result;
        for (const std::string& input : inputs) {
            int count = count_odds(input);
            result.push_back("the number of odd elements " + std::to_string(count) + "\nthe string " + input + " of the input.");
        }
        return result;
    }

    bool issame(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2) {
        if (vec1.size() != vec2.size()) {
            return false;
        }
        for (size_t i = 0; i < vec1.size(); ++i) {
            if (vec1[i] != vec2[i]) {
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