#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

string words_in_sentence(string sentence) {
    string result = "";
    vector<string> words;
    string current_word = "";
    
    for (char c : sentence) {
        if (c == ' ') {
            if (!current_word.empty()) {
                words.push_back(current_word);
                current_word = "";
            }
        } else {
            current_word += c;
        }
    }
    
    if (!current_word.empty()) {
        words.push_back(current_word);
    }
    
    for (const string& word : words) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
    }
    
    if (!result.empty()) {
        result.pop_back(); // Remove the extra space at the end
    }
    
    return result;
}