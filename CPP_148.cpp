#include <iostream>
#include <string>

using namespace std;

bool issame(string a, string b) {
    if (a.length() != b.length()) {
        return false;
    }
    for (int i = 0; i < a.length(); i++) {
        if (tolower(a[i]) != tolower(b[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cin >> num;
    vector<string> strings(num);
    for (int i = 0; i < num; i++) {
        cin >> strings[i];
        if (issame(strings[i], strings[i])) {
            cout << "The strings are the same." << endl;
        } else {
            cout << "The strings are not the same." << endl;
        }
    }
    return 0;
}