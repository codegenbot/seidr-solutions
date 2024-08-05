#include <map>
#include <algorithm>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> result;
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        return std::to_string(a).size() < std::to_string(b).size();
    });
    for (int num : arr) {
        result.push_back(std::to_string(num));
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}