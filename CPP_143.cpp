#include <string>
#include <vector>

string words_in_sentence(string sentence) {
    vector<int> primeNumbers;
    for (int i = 2; i <= 100; ++i) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            primeNumbers.push_back(i);
    }

    vector<string> words = split(sentence, ' ');
    string result;

    for (string word : words) {
        int length = word.length();
        bool found = false;
        for (int prime : primeNumbers) {
            if (length == prime) {
                result += word + " ";
                found = true;
                break;
            }
        }
        if (!found)
            result += word + " ";
    }

    return result.substr(0, result.length() - 1);
}

vector<string> split(string sentence, char delimiter) {
    vector<string> words;
    string word;

    for (char c : sentence) {
        if (c == delimiter) {
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }

    words.push_back(word);

    return words;