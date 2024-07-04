#include <vector>
#include <string>
#include <iostream>
#include <cassert>

using namespace std;

vector<string> all_prefixes(const string& str) {
    vector<string> result;
    for (int i = 1; i <= str.size(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    vector<string> expected{"W", "WW", "WWW"};
    assert(issame(all_prefixes("WWW"), expected));
    cout << "Test passed successfully!" << endl; 
    return 0;
}