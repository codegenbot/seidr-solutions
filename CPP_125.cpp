#include <string>
#include <vector>

bool issame(vector<string> a, vector<string> b) {
    // Your implementation here
}

vector<string> split_words(string txt) {
    vector<string> words;
    string word = "";
    for (char c : txt) {
        if (c == ' ') {
            words.push_back(word);
            word = "";
        } else if (c == ',') {
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    if (word != "") {
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

int main() {
    vector<string> result = split_words("");
    // Remaining main() code
    return 0;
}