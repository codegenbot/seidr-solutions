#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool is_same(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (const string& s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    assert(is_same(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}