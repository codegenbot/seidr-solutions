#include <iostream>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (tolower(a[i]) != tolower(b[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cin >> num;
    vector<string> strings;
    for (int i = 0; i < num; i++) {
        string str1, str2;
        cin >> str1 >> str2;
        if (issame({str1}, {str2})) {
            cout << "The strings are the same." << endl;
        } else {
            cout << "The strings are not the same." << endl;
        }
    }
    return 0;
}