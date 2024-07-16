#include <string>
#include <vector>
#include <cmath>
using namespace std;

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

string words_in_sentence(string sentence) {
    string word, result;
    vector<string> words;
    for (char c : sentence) {
        if (c != ' ') {
            word += c;
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
    for (const string& w : words) {
        if (is_prime(w.length())) {
            result += w + " ";
        }
    }
    if (!result.empty()) {
        result.pop_back(); // Remove the extra space at the end
    }
    return result;
}