#include <iostream>
#include <vector>

using namespace std;

bool is_vowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool issame(string s1, string s2) {
    return (s1 == s2);
}

vector<string> select_words(string s, int n);

int main() {
    string s;
    int n;
    
    getline(cin, s);
    cin >> n;
    
    vector<string> words = select_words(s, n);
    
    for (string word : words) {
        cout << word << " ";
    }
    
    return 0;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    int count = 0;
    string word = "";
    
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == ' ') {
            if (count == n) {
                result.push_back(word);
            }
            count = 0;
            word = "";
        } 
        else {
            if (isalpha(s[i]) && !is_vowel(s[i])) {
                count++;
            }
            word += s[i];
        }
    }
    
    return result;
}