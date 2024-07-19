#include <vector>
#include <string>

bool issame(const vector<string>& v1, const vector<string>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (size_t i = 0; i < v1.size(); ++i) {
        if (!issame_helper(v1[i], v2[i])) {
            return false;
        }
    }
    return true;
}

bool issame_helper(const string& str1, const string& str2) {
    size_t i = 0;
    while (i < str1.size() && i < str2.size()) {
        if (str1[i] != str2[i]) {
            return false;
        }
        ++i;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx") , {"xxx", "xxxAAA", "xxx"}));
}