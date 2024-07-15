#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b);

vector<string> filter_by_prefix(const vector<string>& vec, const string& prefix) {
    vector<string> filtered;
    for (const auto &str : vec) {
        if (str.find(prefix) == 0) {
            filtered.push_back(str);
        }
    }
    return filtered;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"),
                  vector<string>{"xxx", "xxxAAA", "xxx"}));
    return 0;
}