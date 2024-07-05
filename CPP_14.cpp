#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> all_prefixes(const string& str) {
    vector<string> result;
    for (size_t i = 1; i <= str.size(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    assert(all_prefixes("WWW") == vector<string>{"W", "WW", "WWW"});
    cout << "All tests passed!" << endl;
    return 0;
}