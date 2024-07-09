```cpp
#include <vector>
#include <string>

bool issame(vector<string>, vector<string>);

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAaaA", "xxx"}, "xxx") , {"xxx", "xxxAAA", "xxx"}));
    return 0;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto str : strings){
        if(str.find(prefix) == 0)
            result.push_back(str);
    }
    return result;
}

bool issame(vector<string> a, vector<string>b){
    // your logic here
}