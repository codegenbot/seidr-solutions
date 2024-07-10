#include <vector>
#include <string>
#include <iostream>

using namespace std;

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