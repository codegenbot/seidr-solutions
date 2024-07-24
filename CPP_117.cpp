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
            int consonant_count = 0;
            for (char ch : word) {
                if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
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
    }
    return result;
}

int main() {
    string s = "Mary had a little lamb";
    int n = 4;
    vector<string> result = select_words(s, n);
    for (string str : result) {
        cout << str << endl;
    }
    return 0;
}