#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int count = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (count == n) {
                result.push_back(word);
            }
            word = "";
            count = 0;
        } else {
            if (tolower(s[i]) != 'a' && tolower(s[i]) != 'e' && tolower(s[i]) != 'i' && tolower(s[i]) != 'o' && tolower(s[i]) != 'u') {
                count++;
            }
            word += s[i];
        }
    }

    if (count == n) {
        result.push_back(word);
    }

    return result;
}