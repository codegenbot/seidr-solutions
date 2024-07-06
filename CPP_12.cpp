#include <string>
#include <vector>

std::string longest(vector<string> strings){
    string result = strings[0];
    for (const auto& str : strings) {
        if (str.length() > result.length()) {
            result = str;
        }
    }
    return result;
}