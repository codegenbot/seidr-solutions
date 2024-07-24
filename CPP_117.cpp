#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonants = 0;

    for (char c : s) {
        if (c == ' ') {
            if (!word.empty() && consonants == n) {
                result.push_back(word);
            }
            word = "";
            consonants = 0;
        } else {
            bool isConsonant = false;
            for (char ch : "bcdfghjklmnpqrstvwxyz") {
                if (tolower(c) == tolower(ch)) {
                    isConsonant = true;
                    break;
                }
            }
            if (!isConsonant) {
                continue;
            }
            word += c;
            consonants++;
        }
    }

    // Add the last word
    if (!word.empty() && consonants == n) {
        result.push_back(word);
    }

    return result;
}