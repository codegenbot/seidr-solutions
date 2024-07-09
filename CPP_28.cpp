#include <string>

std::string concatenate(vector<std::string> strings){
    std::string result = "";
    for (const auto& str : strings) {
        result += str;
    }
    return result;