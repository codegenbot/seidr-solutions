```
#include <string>
#include <vector>

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
    int n;
    std::cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
    string longest_word = *max_element(words.begin(), words.end(),
                                          [](const string& a, const string& b) {
                                              return a.size() < b.size();
                                          });
    vector<string> same_words;
    for (int i = 0; i < n; i++) {
        if (issame({longest_word}, {words[i]})) {
            same_words.push_back(words[i]);
        }
    }
    cout << "Longest word: " << longest_word << endl;
    cout << "Same words: ";
    for (int i = 0; i < same_words.size(); i++) {
        cout << same_words[i] << " ";
    }
    cout << endl;
    return 0;
}