```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    vector<string> a;
    vector<string> b;

    cout << "Enter the elements of list A (space separated): ";
    for(string s; cin >> s; ) {
        a.push_back(s);
    }

    cout << "Enter the elements of list B (space separated): ";
    for(string s; cin >> s; ) {
        b.push_back(s);
    }
    
    if(issame(a, b)) {
        cout << "List A and List B are same." << endl;
    } else {
        cout << "List A and List B are not same." << endl;
    }
    
    return 0;
}