#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } else if (!word.empty()) {
            bool has_n_consonants = 0;
            for (char con : word) {
                if (!ispunct(con) && !isspace(con)) {
                    if (con != 'a' && con != 'e' && con != 'i' && con != 'o' && con != 'u') {
                        has_n_consonants++;
                    }
                }
            }
            if (has_n_consonants == n) {
                result.push_back(word);
            }
            word = "";
        }
    }
    return result;
}