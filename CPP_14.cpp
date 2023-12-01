#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> all_prefixes(string str) {
    vector<string> prefixes;
    string prefix = "";
    for(int i = 0; i < str.length(); i++) {
        prefix += str[i];
        prefixes.push_back(prefix);
    }
    return prefixes;
}

int main() {
    string input;
    cin >> input;
    
    vector<string> prefixes = all_prefixes(input);
    for (const auto& prefix : prefixes) {
        cout << prefix << " ";
    }
    
    return 0;
}