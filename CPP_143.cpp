#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

string words_in_sentence(string sentence) {
    string result = "";
    vector<string> words;
    
    // Split the sentence into words
    string word = "";
    for (char ch : sentence) {
        if (ch == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += ch;
        }
    }
    words.push_back(word);
    
    // Check if the length of each word is prime
    for (string word : words) {
        if (isPrime(word.length())) {
            result += word + " ";
        }
    }
    
    // Remove the trailing space if any
    if (!result.empty()) {
        result.pop_back();
    }
    
    return result;
}