#include <vector>
#include <string>
#include <iostream>
#include <cassert>

using namespace std;

vector<string> all_prefixes(string str){
    vector<string> result;
    for (int i = 1; i <= str.size(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    vector<string> expected = {"W", "WW", "WWW"};
    vector<string> prefixes = all_prefixes("WWW");

    for (int i = 0; i < prefixes.size(); ++i) {
        assert(prefixes[i] == expected[i]);
    }

    return 0;
}