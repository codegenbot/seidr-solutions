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

int main() {
    assert(all_prefixes("WWW") == vector<string>{"W", "WW", "WWW"});
    cout << "Test Passed\n";
    return 0;
}