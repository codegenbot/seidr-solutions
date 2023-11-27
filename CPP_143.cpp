#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

string words_in_sentence(string sentence) {
    string result = "";
    vector<string> words;

    // Split the sentence into words
    int start = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            words.push_back(sentence.substr(start, i - start));
            start = i + 1;
        }
    }
    words.push_back(sentence.substr(start));

    // Check if the length of each word is prime and append it to the result
    for (int i = 0; i < words.size(); i++) {
        if (isPrime(words[i].length())) {
            result += words[i] + " ";
        }
    }

    // Remove the trailing space if any
    if (!result.empty()) {
        result.pop_back();
    }

    return result;
}