#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty()) {
                int consonants = 0;
                for (char ch : word) {
                    if (!isalpha(ch)) continue;
                    if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'
                        && ch != 'y') {
                        consonants++;
                    }
                }
                if (consonants == n) result.push_back(word);
            }
            word = "";
        } else {
            word += c;
        }
    }
    return result;
}