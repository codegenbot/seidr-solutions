#include<stdio.h>
#include<string>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

string words_in_sentence(string sentence) {
    vector<string> words;
    string word;
    istringstream iss(sentence);
    while (getline(iss, word, ' '))
        words.push_back(word);

    string result;
    for (const auto& word : words) {
        if (isPrime(word.length())) {
            result += word + " ";
        }
    }

    return result.substr(0, result.size() - 1);
}