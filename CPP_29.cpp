#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (!std::find(b.begin(), b.end(), a[i]) != b.end()) return false;
    }
    return true;
}

bool vectorContains(vector<string> vec, string target) {
    for (string s : vec) {
        if (s.find(target) == 0) return true;
    }
    return false;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx"), vector<string>({ "xxx", "xxxAAA", "xxx"})));
    return 0;
}