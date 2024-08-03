```c++
#include <cassert>

bool issame(vector<string> a, vector<string> b) {
    assert(a.size() == b.size());
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for (const auto& s : strings) {
        if (s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}