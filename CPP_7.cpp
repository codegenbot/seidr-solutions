#include <vector>
#include <algorithm>

bool issame(vector<string> a,vector<string>b){
    return a.size() == b.size() && a==b;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}