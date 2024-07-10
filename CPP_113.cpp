#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> odd_count(std::vector<std::string> input) {
    std::vector<std::string> result;
    for (const std::string& str : input) {
        int count = 0;
        for (char c : str) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements in the string " + std::to_string(count) + " of the input.");
    }
    return result;
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}),
          {"the number of odd elements in the string 2 of the input.",
           "the number of odd elements in the string 3 of the input.",
           "the number of odd elements in the string 2 of the input."}));
    return 0;
}