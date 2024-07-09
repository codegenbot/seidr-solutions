```c++
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
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Anti-shuffled string: " << anti_shuffle(s) << endl;
    return 0;
}