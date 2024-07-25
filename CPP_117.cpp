#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    bool in_word = false;
    
    for (char c : s) {
        if (!in_word && isalpha(c)) {
            in_word = true;
            word += tolower(c);
        } else if (in_word && !isalpha(c)) {
            in_word = false;
            
            if (word.length() == n) {
                result.push_back(word);
            }
            
            word = "";
        } else if (in_word && isalpha(c)) {
            word += tolower(c);
        }
    }
    
    if (word.length() == n) {
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