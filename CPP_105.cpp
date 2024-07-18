#include <vector>
#include <string>

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> result;
    for (int i : arr) {
        result.push_back(std::to_string(i));
    }
    return result;
}