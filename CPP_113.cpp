#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> odd_count(std::vector<std::string> lst) {
    std::vector<std::string> result;

    for (const std::string& str : lst) {
        int count = 0;
        for (char c : str) {
            if (c % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + std::to_string(count) + "n the str" + std::to_string(count) + "ng " + str + " of the " + std::to_string(count) + "nput.");
    }

    return result;
}