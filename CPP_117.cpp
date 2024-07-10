#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } else if (!word.empty()) {
            bool has_n_consonants = false;
            for (int i = 0; i < word.size(); ++i) {
                if (!ispunct(word[i])) {
                    int consonant_count = 0;
                    for (int j = 0; j < word.size(); ++j) {
                        if (ispunct(word[j]))
                            continue;
                        if (!isvowel(word[j])) {
                            ++consonant_count;
                        }
                    }
                    if (consonant_count == n) {
                        has_n_consonants = true;
                        break;
                    }
                }
            }
            if (has_n_consonants) {
                result.push_back(word);
            }
            word = "";
        }
    }
    return result;
}

int main() {
    string s;
    int n;
    cout << "Enter a string: ";
    cin >> s;
    cout << "Enter the number of consonants: ";
    cin >> n;
    vector<string> res = select_words(s, n);
    for (auto str : res) {
        cout << str << endl;
    }
    return 0;
}