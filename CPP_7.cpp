```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(b.size() != a.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings) {
        int found = s.find(substring);
        if(found != string::npos)
            result.push_back(s);
        else if (!issame({s}, {"")) // Check if string does not contain substring
            result.push_back(s);
    }
    return result;
}