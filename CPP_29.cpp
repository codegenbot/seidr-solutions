```cpp
#include <vector>
#include <string>

bool isEqual(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto s : strings) {
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;

}

int main() {
    assert(isEqual(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
}