#include <algorithm>   
#include <vector>     
#include <string>

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> result;
    for (int i : arr) {
        result.push_back(std::to_string(i));
    }
    std::sort(result.begin(), result.end(), [](const std::string& a, const std::string& b) {
        return a.size() < b.size();
    });
    return result;
}