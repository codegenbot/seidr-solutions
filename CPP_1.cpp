#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<string> separate_paren_groups(string paren_string);

int main() {
    string input;
    cout << "Enter the parenthesized string: ";
    cin >> input;

    vector<string> groups = separate_paren_groups(input);

    // Output the groups
    for (const string& group : groups) {
        cout << group << endl;
    }

    return 0;
}
```