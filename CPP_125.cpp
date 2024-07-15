#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> split_words(string txt) {
    vector<string> words;
    string word = "";
    for (char c : txt) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    if (words.size() == 1 && words[0].find_first_not_of("abcdefghijklmnopqrstuvwxyz") == string::npos) {
        int count = 0;
        for (char c : words[0]) {
            if (islower(c) && (c - 'a') % 2 == 1) {
                count++;
            }
        }
        words[0] = to_string(count);
    }
    return words;
}