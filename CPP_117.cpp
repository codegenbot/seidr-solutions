#include <vector>
#include <string>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (c != ' ') {
            word += c;
        } else {
            if (count_word_consonants(word) == n) {
                result.push_back(word);
            }
            word = "";
        }
    }
    if (count_word_consonants(word) == n) {
        result.push_back(word);
    }
    return result;

}

int count_word_consonants(string word) {
    int count = 0;
    for (char c : word) {
        if (!isalpha(c) || isvowel(c)) {
            continue;
        }
        count++;
    }
    return count;
}

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}