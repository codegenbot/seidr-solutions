#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> odd_count(std::vector<std::string> lst) {
    std::vector<std::string> result;
    for (const std::string& s : lst) {
        int count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + std::to_string(count) + "n the str" + std::to_string(count) + "ng " + s + " of the " + std::to_string(count) + "nput.");
    }
    return result;
}