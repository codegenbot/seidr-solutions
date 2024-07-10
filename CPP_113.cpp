#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> odd_count(std::vector<std::string> input) {
    std::vector<std::string> result;
    for (const auto& str : input) {
        int oddCount = 0;
        for (char c : str) {
            if (c >= '0' && c <= '9') {
                if ((c - '0') % 2 != 0) {
                    oddCount++;
                }
            }
        }
        result.push_back("the number of odd elements " + std::to_string(oddCount) + " in the string " + str + " of the input.");
    }
    return result;
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}), 
        {"the number of odd elements 2 in the string 271 of the input.", 
         "the number of odd elements 3 in the string 137 of the input.", 
         "the number of odd elements 2 in the string 314 of the input."}));
}