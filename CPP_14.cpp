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

int main() {
    assert(all_prefixes("WWW") == vector<string>{"W", "WW", "WWW"});
    cout << "Test passed successfully!" << endl;
    return 0;
}