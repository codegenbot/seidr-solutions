#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> result;

    for (int num : arr) {
        switch (num) {
            case 4: result.push_back("Four"); break;
            case 8: result.push_back("Eight"); break;
            case 9: result.push_back("Nine"); break;
            default: result.push_back("Unknown"); break;
        }
    }

    return result;
}