```cpp
#include <algorithm>
#include <set>

bool issame(vector<string> a,vector<string>b){
    return set<a.begin(),a.end>() == set(b.begin(),b.end());
}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0 && !issame({str}, {i})) {
            result.push_back(str);
        }
    }
    return result;
}