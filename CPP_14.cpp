#include <iostream>
#include <cassert>
#include <vector>
#include <string>

using namespace std;

vector<string> all_prefixes(string str){
    vector<string> result;
    for (int i = 1; i <= str.size(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main() {
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    assert(issame(all_prefixes("abc"), {"a", "ab", "abc"}));
    assert(issame(all_prefixes("1234"), {"1", "12", "123", "1234"}));
    cout << "All tests passed.\n";
    return 0;
}