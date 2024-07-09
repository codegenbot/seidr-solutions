```cpp
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(const vector<vector<string>>& a, const vector<vector<string>>& b) {
    return a == b;
}

vector<string> all_prefixes(const string& str) {
    vector<string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    string str = "WWW";
    assert(issame(vector<vector<string>>({{"W"}, {"W", "W"}, {"W", "W", "W"}}), vector<vector<string>>({{"W"}, {"W", "W"}, {"W", "W", "W"}})));
    return 0;
}