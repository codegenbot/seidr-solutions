```cpp
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
                unsigned vowel_count = static_cast<unsigned>(count(word.begin(), word.end(), 'a')) + 
                                        static_cast<unsigned>(count(word.begin(), word.end(), 'e')) + 
                                        static_cast<unsigned>(count(word.begin(), word.end(), 'i')) + 
                                        static_cast<unsigned>(count(word.begin(), word.end(), 'o')) + 
                                        static_cast<unsigned>(count(word.begin(), word.end(), 'u'));
                if (vowel_count <= n) {
                    result.push_back(word);
                }
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        unsigned vowel_count = static_cast<unsigned>(count(word.begin(), word.end(), 'a')) + 
                                static_cast<unsigned>(count(word.begin(), word.end(), 'e')) + 
                                static_cast<unsigned>(count(word.begin(), word.end(), 'i')) + 
                                static_cast<unsigned>(count(word.begin(), word.end(), 'o')) + 
                                static_cast<unsigned>(count(word.begin(), word.end(), 'u'));
        if (vowel_count <= n) {
            result.push_back(word);
        }
    }
    return result;
}

int main() {
    string s;
    int n;
    cout << "Enter a sentence: ";
    getline(cin, s);
    cout << "Enter the maximum number of vowels allowed in each word: ";
    cin >> n;
    vector<string> words = select_words(s, n);
    for (string w : words) {
        cout << w << endl;
    }
    return 0;
}