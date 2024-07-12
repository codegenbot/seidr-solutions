```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty() && count_if(word.begin(), word.end(), ::isvowel) <= n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += c;
        }
    }
    if (!word.empty() && count_if(word.begin(), word.end(), ::isvowel) <= n) {
        result.push_back(word);
    }
    return result;
}

bool isvowel(char c) {
    c = tolower(c); // Convert the character to lowercase
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    string s = "Mary had a little lamb";
    int n = 4;
    vector<string> result = select_words(s, n);
    for (string str : result) {
        cout << str << endl;
    }
    return 0;
}