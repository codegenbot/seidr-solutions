#include <vector>
#include <algorithm>

string words_in_sentence(string sentence) {
    vector<string> words;
    string word;
    for (char c : sentence) {
        if (c == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    words.push_back(word);

    string result;
    for (string w : words) {
        int len = w.length();
        bool isPrime = true;
        for (int i = 2; i * i <= len; i++) {
            if (len % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            result += w + " ";
        }
    }

    return result.substr(0, result.length() - 1);
}