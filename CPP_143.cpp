#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

string words_in_sentence(string sentence) {
    string result = "";
    vector<string> words;

    // Split the sentence into words
    string word = "";
    for (char c : sentence) {
        if (c == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    words.push_back(word);

    // Check if the length of each word is prime
    for (string word : words) {
        if (isPrime(word.length())) {
            result += word + " ";
        }
    }

    // Remove the trailing space
    if (!result.empty()) {
        result.pop_back();
    }

    return result;
}