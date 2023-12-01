#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool is_vowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int count_consonants(string word) {
    int count = 0;
    for (int i = 0; i < word.length(); i++) {
        if (!is_vowel(word[i])) {
            count++;
        }
    }
    return count;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }

    string word;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (count_consonants(word) == n) {
                result.push_back(word);
            }
            word.clear();
        } else {
            word += s[i];
        }
    }

    if (count_consonants(word) == n) {
        result.push_back(word);
    }

    return result;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    string sentence;
    int target_consonants;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Enter the number of consonants to select: ";
    cin >> target_consonants;

    vector<string> selected_words = select_words(sentence, target_consonants);

    // Print the selected words
    cout << "Selected words: ";
    for (int i = 0; i < selected_words.size(); i++) {
        cout << selected_words[i] << " ";
    }
    cout << endl;

    return 0;
}