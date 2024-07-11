#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> all_prefixes(string str) {
    vector<string> prefixes;
    for (int i = 1; i <= str.length(); i++) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    vector<string> result = all_prefixes(str);
    for (auto prefix : result) {
        cout << "\"" << prefix << "\",";
    }
    return 0;
}