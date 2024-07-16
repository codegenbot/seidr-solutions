#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    bool inWord = false;
    int consonantCount = 0;

    for (char c : s) {
        if (c == ' ') {
            if (inWord) {
                if (consonantCount == n)
                    result.push_back(word);
                inWord = false;
                consonantCount = 0;
            }
        } else {
            inWord = true;
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y')
                consonantCount++;
            word += c;
        }
    }

    // Add the last word to the result
    if (inWord) {
        if (consonantCount == n)
            result.push_back(word);
    }

    return result;
}

int main() {
    string s = "Mary had a little lamb";
    int n = 4;
    vector<string> words = select_words(s, n);

    for (string word : words) {
        cout << word << endl;
    }

    return 0;
}