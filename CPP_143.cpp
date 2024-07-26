#include <string>
#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
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
    if (!word.empty() && isPrime(word.length())) {
        result += word;
    }
    return result;
}

int main() {
    string sentence;
    getline(cin, sentence);
    cout << words_in_sentence(sentence) << endl;
    return 0;
}