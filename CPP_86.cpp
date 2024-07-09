#include <iostream>
#include <string>

using namespace std;

string anti_shuffle(string s) {
    string res = "";
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 1) {
            res += s[i];
        }
    }
    return res;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;  
    if (!str.empty()) {
        string res = anti_shuffle(str);
        cout << "Anti-Shuffled String: " << res << endl;
    }
    return 0;
}