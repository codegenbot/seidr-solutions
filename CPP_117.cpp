#include <iostream>
#include <vector>
#include <cctype>
#include <assert.h>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonant_count = 0;
    
    for (char c : s) {
        if (c == ' ') {
            if (consonant_count == n) {
                result.push_back(word);
            }
            word = "";
            consonant_count = 0;
        } else if (isalpha(c)) {
            if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
                consonant_count++;
            }
            word += c;
        }
    }
    
    if (consonant_count == n) {
        result.push_back(word);
    }
    
    return result;
}

int main() {
    string input;
    int n;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "Enter the number of consonants: ";
    cin >> n;

    vector<string> words = select_words(input, n);

    for (const string& word : words) {
        cout << word << " ";
    }

    return 0;
}