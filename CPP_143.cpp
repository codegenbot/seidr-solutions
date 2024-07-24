#include <iostream>
#include <string>
#include <vector>

std::string words_in_sentence(std::string sentence) {
    std::vector<int> primeNumbers;
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

    std::vector<std::string> words = split(sentence, ' ');
    std::string result;

    for (std::string word : words) {
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

std::vector<std::string> split(std::string sentence, char delimiter) {
    std::vector<std::string> words;
    std::string word;

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
}