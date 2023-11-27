#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> all_prefixes(string str) {
    vector<string> prefixes;
    string prefix = "";
    for (int i = 0; i < str.length(); i++) {
        prefix += str[i];
        prefixes.push_back(prefix);
    }
    return prefixes;
}

int main() {
    vector<string> prefixes = all_prefixes("WWW");
    if (prefixes == vector<string>{"W", "WW", "WWW"}) {
        cout << "Test passed!" << endl;
    } else {
        cout << "Test failed!" << endl;
    }
    return 0;
}