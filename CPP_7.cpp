#include <vector>
#include <string>

bool isSame(const std::vector<std::string>& vec) {
    if(vec.size() == 0) {
        return true;
    }
    for(int i = 1; i < vec.size(); i++) {
        if(vec[i] != vec[0]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != std::string::npos && isSame({str})) {
            result.push_back(str);
        }
    }
    return result;
}