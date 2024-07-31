#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } else if (!word.empty()) {
            bool has_n_consonants = count(word.begin(), word.end(), [](unsigned char c){return !ispunct(c);}) - count(word.begin(), word.end(), [](unsigned char c){return isvowel(c);}) >= n;
            if (has_n_consonants) {
                result.push_back(word);
            }
            word = "";
        }
    }
    return result;
}

int main() {
    string s = "Mary had a little lamb";
    int n = 4;
    vector<string> res = select_words(s, n);
    for (string str : res) {
        cout << str << endl;
    }
    return 0;
}