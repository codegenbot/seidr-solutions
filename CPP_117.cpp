#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == ' ') {
            int consonants = count(word.begin(), word.end(), 'b') + 
                             count(word.begin(), word.end(), 'c') + 
                             count(word.begin(), word.end(), 'd') + 
                             count(word.begin(), word.end(), 'f') + 
                             count(word.begin(), word.end(), 'g') + 
                             count(word.begin(), word.end(), 'h') + 
                             count(word.begin(), word.end(), 'j') + 
                             count(word.begin(), word.end(), 'k') + 
                             count(word.begin(), word.end(), 'l') + 
                             count(word.begin(), word.end(), 'm') + 
                             count(word.begin(), word.end(), 'p') + 
                             count(word.begin(), word.end(), 'q') + 
                             count(word.begin(), word.end(), 'r') + 
                             count(word.begin(), word.end(), 's') + 
                             count(word.begin(), word.end(), 't') + 
                             count(word.begin(), word.end(), 'v') + 
                             count(word.begin(), word.end(), 'w') + 
                             count(word.begin(), word.end(), 'x') + 
                             count(word.begin(), word.end(), 'y') + 
                             count(word.begin(), word.end(), 'z');
            if (consonants == n) {
                result.push_back(word);
            }
            word.clear();
        } else {
            word += s[i];
        }
    }
    int consonants = count(word.begin(), word.end(), 'b') + 
                    count(word.begin(), word.end(), 'c') + 
                    count(word.begin(), word.end(), 'd') + 
                    count(word.begin(), word.end(), 'f') + 
                    count(word.begin(), word.end(), 'g') + 
                    count(word.begin(), word.end(), 'h') + 
                    count(word.begin(), word.end(), 'j') + 
                    count(word.begin(), word.end(), 'k') + 
                    count(word.begin(), word.end(), 'l') + 
                    count(word.begin(), word.end(), 'm') + 
                    count(word.begin(), word.end(), 'p') + 
                    count(word.begin(), word.end(), 'q') + 
                    count(word.begin(), word.end(), 'r') + 
                    count(word.begin(), word.end(), 's') + 
                    count(word.begin(), word.end(), 't') + 
                    count(word.begin(), word.end(), 'v') + 
                    count(word.begin(), word.end(), 'w') + 
                    count(word.begin(), word.end(), 'x') + 
                    count(word.begin(), word.end(), 'y') + 
                    count(word.begin(), word.end(), 'z');
    if (consonants == n) {
        result.push_back(word);
    }
    return result;
}

int main() {
    string s = "Mary had a little lamb";
    int n = 4;
    vector<string> result = select_words(s, n);
    for (const auto& word : result) {
        cout << word << endl;
    }
    return 0;
}