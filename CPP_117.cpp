#include<stdint.h>
#include<vector>
#include<string>
#include<algorithm>
#include<cctype>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonantCount = 0;

    for (char c : s) {
        if (c == ' ') {
            if (!word.empty() && consonantCount == n) {
                result.push_back(word);
            }
            word = "";
            consonantCount = 0;
        } else if (isalpha(c)) {
            char ch = tolower(c);
            if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
                consonantCount++;
            }
            word += c;
        }
    }

    // Add the last word
    if (!word.empty()) {
        result.push_back(word);
    }

    return result;
}