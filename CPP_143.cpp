#include<stdio.h>
#include<string>
#include<vector>
#include<iostream>
#include<cmath>

using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

string words_in_sentence(string sentence) {
    stringstream ss(sentence);
    string word;
    vector<string> primeWords;

    while (ss >> word) {
        if (is_prime(word.length())) {
            primeWords.push_back(word);
        }
    }

    string result = "";
    for (const string& primeWord : primeWords) {
        result += primeWord + " ";
    }

    return result;
}

int main() {
    string sentence;
    getline(cin, sentence);
    cout << words_in_sentence(sentence) << endl;
    return 0;
}