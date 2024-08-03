#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string currentWord = "";
    int consonantCount = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonantCount == n) {
                result.push_back(currentWord);
            }
            currentWord = "";
            consonantCount = 0;
        } else if (!isalpha(c)) {
            continue; // skip non-alphabetic characters
        } else {
            char ch = tolower(c);
            if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
                consonantCount++;
            }
            currentWord += c;
        }
    }

    // process the last word
    if (consonantCount == n) {
        result.push_back(currentWord);
    }

    return result;
}