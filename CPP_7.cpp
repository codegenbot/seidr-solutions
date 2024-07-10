```cpp
#include <vector>
#include <string>

bool issame(vector<string> a,vector<string> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(find(b.begin(),b.end(),a[i]) == b.end()) return false;
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& str : strings) {
        if(str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}