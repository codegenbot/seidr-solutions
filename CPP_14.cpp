#include <vector>
#include <string>
#include <cassert>
#include <iostream>

using namespace std;

vector<string> all_prefixes(const string& str) {
    vector<string> prefixes;
    for (size_t i = 1; i <= str.size(); ++i) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

int main() {
    assert(all_prefixes("WWW") == vector<string>({"W", "WW", "WWW"}));
    cout << "All tests passed!" << endl;
    return 0;
}