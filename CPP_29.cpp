```cpp
#include <vector>
#include <string>

bool issame(const vector<string>& a, const vector<string>& b){
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
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
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}) );
    return 0;
}