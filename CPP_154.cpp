#include <iostream>
#include <string>

bool cycpattern_check(string a, string b) {
    for(int i = 0; i < a.length(); i++) {
        string temp = a.substr(i);
        if(temp.length() >= b.length()) {
            bool flag = true;
            for(int j = 0; j < b.length(); j++) {
                if(temp.find(b[j]) == -1) {
                    flag = false;
                    break;
                }
                temp = temp.substr(1) + temp[0];
            }
            if(flag) return true;
        }
    }
    return false;
}

int main() {
    string a, b;
    cout << "Enter the first string: ";
    cin >> a;
    cout << "Enter the second string: ";
    cin >> b;
    
    if(cycpattern_check(a, b)) {
        cout << "The pattern is cyclically present in the given strings." << endl;
    } else {
        cout << "The pattern is not cyclically present in the given strings." << endl;
    }
    
    return 0;
}