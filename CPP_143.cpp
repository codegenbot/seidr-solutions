#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>

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
    istringstream iss(sentence);
    string word;
    vector<string> result;
    while (iss >> word) {
        if (isPrime(word.length())) {
            result.push_back(word);
        }
    }
    string output;
    for (size_t i = 0; i < result.size(); ++i) {
        if (i > 0) output += " ";
        output += result[i];
    }
    return output;
}