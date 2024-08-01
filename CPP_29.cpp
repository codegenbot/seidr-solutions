```cpp
#include <vector>
#include <string>

bool isSame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(isSame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx") , {"xxx", "xxxAAA", "xxx"}));
    return 0;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0) result.push_back(s);
    }
    return result;
}