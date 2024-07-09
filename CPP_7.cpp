#include <vector>
#include <cassert>

bool issame(const string& str, const string& substring){
    return str == substring;
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