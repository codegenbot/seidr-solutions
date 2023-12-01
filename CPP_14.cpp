#include <string>
#include <vector>
#include <cassert>

using namespace std;

vector<string> all_prefixes(string str) {
    vector<string> prefixes;
    string prefix = "";
    for(int i = 0; i < str.length(); i++) {
        prefix += str[i];
        prefixes.push_back(prefix);
    }
    return prefixes;
}

vector<string> example_test_case() {
    assert(all_prefixes("WWW") == vector<string>{"W", "WW", "WWW"});
    return {};
}