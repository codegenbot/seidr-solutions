#include <vector>
#include <string>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

string words_in_sentence(string sentence) {
    vector<string> words;
    int len = 0;
    string word;

    // split the sentence into words
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            if (len > 0) {
                words.push_back(word);
                word.clear();
                len = 0;
            }
        } else {
            word += sentence[i];
            len++;
        }
    }

    // add the last word
    if (len > 0) {
        words.push_back(word);
    }

    string result = "";
    for (int i = 0; i < words.size(); i++) {
        int len_word = words[i].length();
        if (isPrime(len_word)) {
            result += words[i] + " ";
        }
    }

    return result.substr(0, result.length() - 1);
}