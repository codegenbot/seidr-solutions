```cpp
#include <algorithm>
#include <iostream>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            string word;
            for (int j = i; j < s.length() && s[j] != ' '; j++) {
                word += s[j];
            }
            sort(word.begin(), word.end());
            result += word;
            i = j - 1;
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    string res = anti_shuffle(str);
    cout << "Anti-Shuffled String: " << res << endl;
    return 0;