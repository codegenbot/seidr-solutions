#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    
    for (char c : s) {
        if (c != ' ') {
            word += c;
        } else if (!word.empty()) {
            bool has_n_consonants = count_if(word.begin(), word.end(), ::isupper) == 0 && count_if(word.begin(), word.end(), ::ispunct) == 0;
            int consonant_count = 0;
            for (char ch : word) {
                if (!::isalpha(ch)) continue;
                char letter = tolower(ch);
                if (letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u') consonant_count++;
            }
            if (has_n_consonants && consonant_count == n) {
                result.push_back(word);
            }
            word = "";
        }
    }
    
    // Add the last word
    bool has_n_consonants = count_if(word.begin(), word.end(), ::isupper) == 0 && count_if(word.begin(), word.end(), ::ispunct) == 0;
    int consonant_count = 0;
    for (char ch : word) {
        if (!::isalpha(ch)) continue;
        char letter = tolower(ch);
        if (letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u') consonant_count++;
    }
    if (has_n_consonants && consonant_count == n) {
        result.push_back(word);
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