#include <cassert>
#include <vector>
#include <string>

namespace solution_name {
    int odd_count(const std::vector<std::string>& strings) {
        int count = 0;
        for (const std::string& str : strings) {
            for (char c : str) {
                if (c >= '0' && c <= '9' && (c - '0') % 2 != 0) {
                    count++;
                }
            }
        }
        return count;
    }

    bool issame(int result, const std::vector<std::string>& expected_output) {
        for (int i = 0; i < result; ++i) {
            if (expected_output[i].find(std::to_string(result)) == std::string::npos) {
                return false;
            }
        }
        return true;
    }
}

int main() {
    assert(solution_name::issame(solution_name::odd_count({"271", "137", "314"}), 
                                  { "the number of odd elements 3\nthe string 271 of the input.",
                                    "the number of odd elements 2\nthe string 137 of the input.",
                                    "the number of odd elements 2\nthe string 314 of the input."}));
    return 0;
}