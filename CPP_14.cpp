#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);

vector<string> all_prefixes(string str);

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> all_prefixes(string str){
    vector<string> result;
    string prefix = "";
    for (char c : str) {
        prefix += c;
        result.push_back(prefix);
    }
    return result;
}

int main() {
    vector<string> prefixes = all_prefixes("hello");
    for (const string& prefix : prefixes) {
        cout << prefix << " ";
    }
    cout << endl;

    vector<string> prefixes2 = all_prefixes("world");
    for (const string& prefix : prefixes2) {
        cout << prefix << " ";
    }
    cout << endl;

    cout << "Prefixes are same: " << (issame(prefixes, prefixes2) ? "Yes" : "No") << endl;

    return 0;
}