#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool is_vowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool issame(char a, char b) {
    return tolower(a) == tolower(b);
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

int main() {
    string sentence;
    int targetCount;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    cout << "Enter the target count: ";
    cin >> targetCount;

    vector<string> words = select_words(sentence, targetCount);

    cout << "Selected words: ";
    for (auto word : words) {
        cout << word << " ";
    }

    return 0;
}