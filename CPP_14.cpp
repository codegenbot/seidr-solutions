#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<string> all_prefixes(string str);

bool issame(vector<string> a, vector<string> b) {
    // Compare the two vectors and return true or false;
}

vector<string> all_prefixes(string str);

int main() {
    vector<string> result = all_prefixes("WWW");
    for (const auto& prefix : result) {
        cout << prefix << " ";
    }
    cout << endl;

    return 0;
}

vector<string> all_prefixes(string str) {
    vector<string> prefixes;
    string prefix = "";
    for (int i = 0; i < str.length(); i++) {
        prefix += str[i];
        prefixes.push_back(prefix);
    }
    return prefixes;
}