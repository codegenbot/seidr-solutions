#include <vector>
#include <string>

bool same(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(same(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAaaAaAa", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}