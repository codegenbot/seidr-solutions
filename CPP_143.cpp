#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

string words_in_sentence(string sentence) {
    string result = "";
    vector<string> words;
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
    
    for (const string& w : words) {
        if (isPrime(w.length())) {
            result += w + " ";
        }
    }
    
    if (!result.empty()) {
        result.pop_back(); // Remove the extra space at the end
    }
    
    return result;
}