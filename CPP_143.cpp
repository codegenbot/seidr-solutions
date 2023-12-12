#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

string words_in_sentence(string sentence) {
    vector<string> words;
    string word;
    for (int i = 0; i < sentence.size(); i++) {
        if (sentence[i] == ' ') {
            words.push_back(word);
            word.clear();
        } else {
            word += sentence[i];
        }
    }
    words.push_back(word);

    string result;
    for (int i = 0; i < words.size(); i++) {
        if (isPrime(words[i].size())) {
            result += words[i] + " ";
        }
    }
    return result.substr(0, result.size() - 1);
}