#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cin >> num;
    if (num > 0) {
        vector<string> a, b;
        for (int i = 0; i < num; i++) {
            string s1, s2;
            cin >> s1 >> s2;
            a.push_back(s1);
            b.push_back(s2);
        }
        if (issame(a, b)) {
            cout << "The two lists are the same." << endl;
        } else {
            cout << "The two lists are not the same." << endl;
        }
    } else {
        cout << "Error: Input number should be positive." << endl;
    }
    
    return 0;
}