#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> all_prefixes(const string& str) {
    vector<string> prefixes;
    string prefix = "";
    for(int i = 0; i <= str.length(); i++) {
        prefix += str[i];
        prefixes.push_back(move(prefix));
    }
    return prefixes;
}

int main() {
    vector<string> expected = {"W", "WW", "WWW"};
    vector<string> result = all_prefixes("WWW");
    assert(result == expected);
    cout << "Test cases passed." << endl;
    return 0;
}