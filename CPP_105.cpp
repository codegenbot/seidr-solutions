#include <vector>
#include <string>

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> result;
    for (int i = 0; i < arr.size(); ++i) {
        result.push_back(std::to_string(arr[i]));
    }
    return result;
}