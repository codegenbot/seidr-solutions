```cpp
#include <vector>
#include <algorithm>

using namespace std;

bool is_same(vector<string> a, vector<string> b) {
    return a.size() == b.size() && all_of(a.begin(), a.end(), [&](string s) { return find(b.begin(), b.end(), s) != b.end(); });
}

vector<string> filter_by_prefix(vector<string> input, string prefix) {
    vector<string> filtered;
    for (string s : input) {
        if (s.find(prefix) == 0) {
            filtered.push_back(s);
        }
    }
    return filtered;

}

int main() {
    if (is_same(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"})) {
        cout << "Filtering successful." << endl;
    } else {
        cout << "Filtering failed." << endl;
    }
    return 0;
}