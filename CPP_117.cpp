```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    int consonants = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonants == n) {
                result.push_back(word);
                consonants = 0;
                word.clear();
            } else {
                consonsons = 0;
                word.clear();
            }
        } else {
            if (islower(c)) {
                continue;
            }

            bool isConsonant = false;
            for (char ch : "bcdfghjklmnpqrstvwxyz") {
                if (c == ch) {
                    isConsonant = true;
                    break;
                }
            }

            if (isConsonant) {
                consonants++;
            }

            word += c;
        }
    }

    if (consonants == n) {
        result.push_back(word);
    }

    return result;
}

int main() {
    string s = "Mary had a little lamb";
    int n = 4;
    vector<string> result = select_words(s, n);

    cout << "Words with exactly " << n << " consonants: ";
    for (string word : result) {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}