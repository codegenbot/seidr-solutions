#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> odd_count(const std::vector<std::string>& input) {
    std::vector<std::string> result;
    for (size_t i = 0; i < input.size(); ++i) {
        int count = 0;
        for (size_t j = 0; j < input[i].size(); ++j) {
            if ((input[i][j] - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + std::to_string(count) + " in the string " + std::to_string(i + 1) + " of the input.");
    }
    return result;
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}), {"the number of odd elements 2 in the string 1 of the input.", "the number of odd elements 2 in the string 2 of the input.", "the number of odd elements 2 in the string 3 of the input."}));
    return 0;
}