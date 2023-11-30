#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

string words_in_sentence(string sentence) {
    string result = "";
    vector<string> words;
    string word = "";
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += sentence[i];
        }
    }
    words.push_back(word);

    for (int i = 0; i < words.size(); i++) {
        if (isPrime(words[i].length())) {
            result += words[i] + " ";
        }
    }

    if (!result.empty()) {
        result.pop_back(); // Remove the last space
    }

    return result;
}