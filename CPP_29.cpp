#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (string s : strings) {
        if (s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    
    vector<string> input_strings;
    string temp;
    
    for(int i = 0; i < n; ++i) {
        cin >> temp;
        input_strings.push_back(temp);
    }

    string prefix;
    cin >> prefix;

    vector<string> filtered = filter_by_prefix(input_strings, prefix);

    if(issame(input_strings, filtered))
        cout << "The strings are same\n";
    else
        cout << "The strings are not the same\n";

    return 0;
}