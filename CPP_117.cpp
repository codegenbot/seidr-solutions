#include <iostream>
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
                bool has_n_consonants = false;
                int consonant_count = 0;
                for (char ch : word) {
                    if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != ' ') {
                        consonant_count++;
                    }
                }
                if (consonant_count == n) {
                    has_n_consonants = true;
                }
                if (has_n_consonants) {
                    result.push_back(word);
                }
                word = "";
            }
        } else {
            word += c;
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
    vector<string> result = select_words(s, n);
    for (string word : result) {
        cout << word << endl;
    }
    return 0;
}