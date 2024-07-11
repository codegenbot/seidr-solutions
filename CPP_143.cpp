#include <vector>
#include <algorithm>

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
    int length;
    for (char c : sentence) {
        if (c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if (!word.empty())
        words.push_back(word);

    string result;
    for (string w : words) {
        length = w.length();
        if (isPrime(length))
            result += w + " ";
    }

    return result.substr(0, result.size() - 1);
}