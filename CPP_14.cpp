```cpp
#include <string>
#include <vector>
#include <cassert>
using namespace std;

std::string isSame(const vector<string>& a, const vector<string>& b) {
    return (a.size() == b.size()) ? "True" : "False";
}

vector<string> all_prefixes(string str) {
    vector<string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    assert(isSame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
}