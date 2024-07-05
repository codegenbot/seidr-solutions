#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

string words_in_sentence(string sentence) {
    istringstream iss(sentence);
    string word, result = "";
    while (iss >> word) {
        if (is_prime(word.length())) {
            if (!result.empty()) result += " ";
            result += word;
        }
    }
    return result;
}