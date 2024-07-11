#include <vector>

string words_in_sentence(string sentence) {
    vector<string> wordList;
    string word;
    for (char c : sentence) {
        if (c == ' ') {
            wordList.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    wordList.push_back(word);

    string result = "";
    for (string w : wordList) {
        bool isPrime = true;
        for (int i = 2; i * i <= w.length(); i++) {
            if (w.length() % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            result += w + " ";
    }

    return result.substr(0, result.size() - 1);
}