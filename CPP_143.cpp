#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

string words_in_sentence(string sentence) {
    vector<string> words;
    string word = "";
    for (char c : sentence) {
        if (c == ' ') {
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

    string result = "";
    for (string w : words) {
        if (isPrime(w.size())) {
            result += w + " ";
        }
    }
    if (!result.empty()) {
        result.pop_back(); // Remove the extra space at the end
    }

    return result;
}