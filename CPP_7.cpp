#include <string>
#include <vector>

bool issame(const std::string& str1, const std::string& str2) {
    if (str1.length() != str2.length()) {
        return false;
    }
    for (int i = 0; i < str1.length(); ++i) {
        if (std::tolower(str1[i]) != std::tolower(str2[i])) {
            return false;
        }
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& str : strings) {
        if (issame(str, substring)) {
            result.push_back(str);
        }
    }
    return result;
}