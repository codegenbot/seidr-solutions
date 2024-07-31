#include <string>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

string words_in_sentence(string sentence) {
    string result = "";
    string word = "";
    for (char c : sentence) {
        if (c == ' ') {
            if (isPrime(word.length())) {
                result += word + " ";
            }
            word = "";
        } else {
            word += c;
        }
    }
    if (isPrime(word.length())) {
        result += word;
    }
    return result;
}