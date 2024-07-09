```cpp
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            string word;
            int j = i;
            while (j < s.length() && s[j] != ' ') {
                word += s[j];
                j++;
            }
            sort(word.begin(), word.end());
            result += word;
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << "Anti-shuffled sentence: " << anti_shuffle(str) << endl;
    return 0;
}