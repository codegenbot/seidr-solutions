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
    int len = 0;
    string word;
    
    // Split the sentence into words
    for (char c : sentence) {
        if (c == ' ') {
            if (len > 0) {
                words.push_back(word);
                word.clear();
                len = 0;
            }
        } else {
            word += c;
            len++;
        }
    }
    
    // Add the last word
    if (len > 0) {
        words.push_back(word);
    }

    string result;
    for (string w : words) {
        int wl = w.length();
        if (isPrime(wl)) {
            result += w + " ";
        }
    }
    
    return result.substr(0, result.length() - 1); // Remove the extra space at the end
}