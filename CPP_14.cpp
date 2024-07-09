```cpp
#include <cassert>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool isSame(const vector<string>& a, const vector<string>& b) {
    return a.size() == b.size();
}

const vector<string> all_prefixes(const string& str) {
    vector<string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int testMain() {
    assert(all_prefixes("WWW") == vector<string>({"W", "WW", "WWW"}));
    return 0;
}