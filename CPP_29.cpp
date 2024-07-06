#include <vector>
#include <initializer_list>
#include <string>
#include <cassert>

using namespace std;

bool same(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (string s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}

int runTests() {
    vector<string> test = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    assert(same(filter_by_prefix(test, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}