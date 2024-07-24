```cpp
#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for(string s : strings) {
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}

int main() {
    vector<string> input = {"xxx", "asd", "xxy", "john doe", "xxxAaaAa", "xxx"};
    vector<string> output = filter_by_prefix(input, "xxx");
    assert(issame(output, vector<string> {"xxx", "xxxAAA", "xxx"}));
    return 0;
}