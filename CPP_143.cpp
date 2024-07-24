#include <string>
#include <vector>

string words_in_sentence(string sentence){
    vector<string> words = split(sentence, ' ');
    string result = "";
    for (int i = 0; i < words.size(); i++) {
        if (is_prime(words[i].length())) {
            result += words[i] + " ";
        }
    }
    return result.substr(0, result.length() - 1);
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

vector<string> split(string sentence, char c) {
    vector<string> words;
    string word = "";
    for (char ch : sentence) {
        if (ch != c) {
            word += ch;
        } else {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    return words;