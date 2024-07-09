#include <initializer_list>
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
    vector<vector<string>> a = {{"W"}, {"W", "W"}, {"W", "W", "W"}};
    vector<vector<string>> b = {{"W"}, {"W", "W"}, {"W", "W", "W"}};
    assert(issame(a, b));
    vector<string> prefixes = all_prefixes(str);
    for (const string& prefix : prefixes) {
        cout << prefix << endl;
    }
    return 0;
}