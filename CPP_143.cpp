#include <vector>
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

    // Split the sentence into words
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += sentence[i];
        }
    }
    words.push_back(word);

    // Filter out the words with non-prime lengths
    string result;
    for (int i = 0; i < words.size(); i++) {
        len = words[i].length();
        if (isPrime(len))
            result += words[i] + " ";
    }

    return result.substr(0, result.length() - 1);
}