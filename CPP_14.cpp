#include <vector>
#include <string>
using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> all_prefixes(const string& str) {
    vector<string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

bool main() {
    const string str = "WWW";
    assert(issame(all_prefixes(str), {"W", "WW", "WWW"}));
    return 0;
}