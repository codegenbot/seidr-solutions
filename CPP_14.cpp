#include <iostream>
#include <cassert>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool issame(vector<string> v1, vector<string> v2) {
    return v1 == v2;
}

vector<string> all_prefixes(string str) {
    vector<string> result;
    for (int i = 1; i <= str.size(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    assert(issame(all_prefixes("WWW"), vector<string>{"W", "WW", "WWW"}));
    cout << "Test Passed\n";
    return 0;
}