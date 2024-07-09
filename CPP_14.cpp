#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> all_prefixes(string str){
    vector<string> prefixes;
    for (unsigned int i = 1; i <= str.size(); ++i) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

int main() {
    assert(all_prefixes("WWW") == vector<string>{"W", "WW", "WWW"});
    assert(all_prefixes("abc") == vector<string>{"a", "ab", "abc"});

    return 0;
}