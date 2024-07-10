#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool issame(vector<string> a) {
    for (int i = 1; i < a.size(); i++) {
        if (!issame({a[0], a[i]})) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cin >> num;
    vector<string> strs;
    for (int i = 0; i < num; i++) {
        string str1, str2;
        cin >> str1 >> str2;
        if (issame({str1, str2})) { 
            cout << "The strings are the same." << endl;
        } else {
            cout << "The strings are not the same." << endl;
        }
    }

    return 0;
}