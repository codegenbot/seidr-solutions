#include <iostream>
#include <sstream>
#include <cmath>
#include <string>  // Include this header for std::string

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
    stringstream ss(sentence);
    string word, result;
    while (ss >> word) {
        if (isPrime(word.length())) {
            if (!result.empty()) result += " ";
            result += word;
        }
    }
    return result;
}

int main() {
    string sentence;
    getline(cin, sentence);
    cout << words_in_sentence(sentence) << endl;
    return 0;
}