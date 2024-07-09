#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for(string s : strings) {
        if(s.find(substring) == string::npos) {
            bool issameToPrev = (result.empty()) ? false : issame({s}, result);
            if (!issameToPrev) {
                result.clear();
                result.push_back(s);
            } else {
                result.push_back(s);
            }
        }
    }
    return result;
}