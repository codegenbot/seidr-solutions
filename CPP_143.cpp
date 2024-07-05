#include<stdio.h>
#include<string>
#include<sstream>
#include<vector>
#include<cmath>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

string words_in_sentence(string sentence) {
    stringstream ss(sentence);
    string word, result;
    while (ss >> word) {
        if (is_prime(word.length())) {
            if (!result.empty()) result += " ";
            result += word;
        }
    }
    return result;
}