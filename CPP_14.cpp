#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> all_prefixes(string str) {
    vector<string> prefixes;
    for (int i = 0; i <= str.length(); i++) {
        string prefix = str.substr(0, i);
        prefixes.push_back(prefix);
    }
    return prefixes;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    vector<string> result = all_prefixes(str);
    for (string s : result) {
        cout << s << endl;
    }
    return 0;
}