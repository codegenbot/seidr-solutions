#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> select_words(string s, int n);

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    
    string word = "";
    int consonantCount = 0;
    for (char c : s) {
        if (isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                if (!word.empty() && consonantCount == n) {
                    result.push_back(word);
                    word = "";
                    consonantCount = 0;
                }
            } else {
                word += c;
                consonantCount++;
            }
        } else {
            if (!word.empty() && consonantCount == n) {
                result.push_back(word);
                word = "";
                consonantCount = 0;
            }
        }
    }
    if (!word.empty() && consonantCount == n) {
        result.push_back(word);
    }
    
    return result;
}

int main() {
    string input;
    int n;
    cout << "Enter a string: ";
    cin >> input;
    cout << "Enter the consonant count: ";
    cin >> n;

    vector<string> result = select_words(input, n);
    for (const string& word : result) {
        cout << word << " ";
    }

    return 0;
}