```c++
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    vector<string> strings = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    string prefix = "xxx";
    vector<string> result = filter_by_prefix(strings, prefix);
    assert(result == vector<string>({"xxx", "xxxAAA", "xxx"}));
}