#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> by_length(const std::vector<int>& arr) {
    std::vector<std::string> result;
    for (int num : arr) {
        if (num == 1)
            result.push_back("One");
        else if (num == 2)
            result.push_back("Two");
        else if (num == 3)
            result.push_back("Three");
        else if (num == 4)
            result.push_back("Four");
        else if (num == 5)
            result.push_back("Five");
        else if (num == 6)
            result.push_back("Six");
        else if (num == 7)
            result.push_back("Seven");
        else if (num == 8)
            result.push_back("Eight");
        else if (num == 9)
            result.push_back("Nine");
    }
    return result;
}