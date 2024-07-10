#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    bool isConsonant = false;

    for (char c : s) {
        if (c == ' ') {
            if (isConsonant) {
                int consonantsInWord = 0;
                for (int i = 0; i < word.length(); i++) {
                    if (!ispunct(word[i]) && !isspace(word[i])) {
                        if (!ispunct(word[i]) && !ispunct(word[i])) {
                            consonantsInWord++;
                        }
                    }
                }
                if (consonantsInWord == n) {
                    result.push_back(word);
                }
            }
            word = "";
            isConsonant = false;
        } else {
            bool isVowelOrPunctuation = isalpha(c) && (ispunct(c) || isvowel(c));
            if (!isVowelOrPunctuation) {
                isConsonant = true;
            }
            word += c;
        }
    }

    if (isConsonant) {
        int consonantsInWord = 0;
        for (int i = 0; i < word.length(); i++) {
            if (!ispunct(word[i]) && !isspace(word[i])) {
                if (!ispunct(word[i]) && !ispunct(word[i])) {
                    consonantsInWord++;
                }
            }
        }
        if (consonantsInWord == n) {
            result.push_back(word);
        }
    }

    return result;
}