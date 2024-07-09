```cpp
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()) return false;
    for(size_t i = 0; i < a.size(); ++i)
        if(a[i] != b[i]) return false;
    return true;
}

int main_test() {
    assert (issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAs", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}