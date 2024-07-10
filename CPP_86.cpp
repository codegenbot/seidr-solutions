#include <algorithm>
#include <string> 
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
        for (char c : word) {
            result += min_element(word.begin(), word.end()) -> first;
        }
        i += word.length() - 1;
    }
    return result;
}