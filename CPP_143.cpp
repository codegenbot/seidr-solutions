#include <vector>
#include<string>

using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

string words_in_sentence(string sentence) {
    vector<string> words;
    string word;
    int len;

    stringstream ss(sentence);
    while (ss >> word) {
        len = word.length();
        if (isPrime(len))
            words.push_back(word);
    }

    string result;
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i != words.size() - 1)
            result += " ";
    }
    return result;
}