#include <algorithm>
#include <vector>
#include <string>

using namespace std;

string words_in_sentence(string sentence) {
    vector<string> words;
    string word;
    for (auto i = 0; i < sentence.size(); ++i) {
        if (sentence[i] == ' ') {
            words.push_back(word);
            word.clear();
        } else {
            word += sentence[i];
        }
    }
    words.push_back(word);

    string result;
    for (const auto& w : words) {
        int len = w.size();
        bool isPrime = true;
        if (len > 1) {
            for (int i = 2; i * i <= len; ++i) {
                if (len % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        } else {
            isPrime = false;
        }
        if (isPrime) {
            result += w + " ";
        }
    }

    return result.substr(0, result.size() - 1);
}