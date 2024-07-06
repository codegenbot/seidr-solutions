```cpp
#include <iostream>
#include <vector>
#include <string>

vector<string> b;
bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}

int main() {
    vector<string> strings = {"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"};
    b = filter_by_prefix(strings, "xxx"); 
    assert (issame(b , {"xxx", "xxxAAA", "xxx"}));
    return 0;
}