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
            int consonants = 0;
            for (char ch : word) {
                if (!ispunct(ch) && !isspace(ch) && ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
                    consonants++;
                }
            }
            
            if (consonants == n) {
                result.push_back(word);
            }
            
            word = "";
        }
    }
    
    return result;
}

int main() {
    string s;
    int n;

    cout << "Enter a string: ";
    getline(cin, s);

    cout << "Enter the number of consonants: ";
    cin >> n;

    vector<string> result = select_words(s, n);

    cout << "Words with exactly " << n << " consonants: ";
    for (string word : result) {
        cout << word << " ";
    }
    cout << endl;
    
    return 0;
}