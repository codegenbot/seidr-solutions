```cpp
#include <initializer_list>
#include <iostream>
#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
            continue;
        }
        string word = "";
        for (int j = i; j < s.length() && s[j] != ' '; j++) {
            word += s[j];
        }
        sort(word.begin(), word.end());
        result += word;
        i += word.length() - 1;
    }
    return result;
}

int main{
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << "Anti-shuffled sentence: " << anti_shuffle(str) << endl;
    return 0;
}