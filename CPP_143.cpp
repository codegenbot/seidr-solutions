#include <iostream>
#include <string>
#include <vector>

using namespace std;

string words_in_sentence(string sentence) {
    vector<string> words;
    string word = "";
    
    // Split the sentence into words
    for (char c : sentence) {
        if (c == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    words.push_back(word);
    
    string result = "";
    
    // Check if the length of each word is prime
    for (string word : words) {
        int length = word.length();
        bool isPrime = true;
        
        if (length <= 1) {
            isPrime = false;
        } else {
            for (int i = 2; i * i <= length; i++) {
                if (length % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        
        if (isPrime) {
            result += word + " ";
        }
    }
    
    // Remove the trailing space if there is any
    if (!result.empty()) {
        result.pop_back();
    }
    
    return result;
}