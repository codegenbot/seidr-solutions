#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> filter_by_prefix(vector<string> vec, string prefix) {
    vector<string> filtered_vec;
    for (const auto& str : vec) {
        if (str.substr(0, prefix.size()) == prefix) {
            filtered_vec.push_back(str);
        }
    }
    return filtered_vec;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}