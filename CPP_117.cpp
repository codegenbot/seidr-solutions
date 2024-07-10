#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    int consonants = 0;

    for (char c : s) {
        if (c != ' ') {
            if (!isalpha(c)) continue; // skip non-alphabets
            bool isConsonant = !isupper(c) && c != 'y'; // assume lowercase, adjust for uppercase and 'y'
            if (isConsonant) consonants++;
            word += tolower(c); // store in lowercase
        } else {
            if (consonants == n) result.push_back(word);
            word = "";
            consonants = 0;
        }
    }

    if (consonants == n) result.push_back(word);

    return result;
}