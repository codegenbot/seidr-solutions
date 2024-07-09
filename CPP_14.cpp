```cpp
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool isSame(const vector<string>& a, const vector<string>& b) {
    return a.size() == b.size();
}

vector<string> all_prefixes(string str) {
    vector<string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    assert(all_prefixes("WWW") == vector<string>({"W", "WW", "WWW"}));
}