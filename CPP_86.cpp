#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += ' ';
        } else {
            string word;
            while (i < s.length() && s[i] != ' ') {
                word += s[i];
                i++;
            }
            for (int j = 0; j < word.length(); j++) {
                result += min_element(word.begin(), word.end()) -> first;
                word.erase(min_element(word.begin(), word.end()));
            }
        }
    }
    return result;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << anti_shuffle(s) << endl;
    return 0;
}