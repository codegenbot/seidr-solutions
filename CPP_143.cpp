#include <iostream>
#include <string>
#include <algorithm>

std::string words_in_sentence(std::string sentence) {
    std::string result = "";
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31}; // Predefined prime numbers up to 31

    size_t start = 0;
    size_t end = sentence.find(' ');

    while (end != std::string::npos) {
        std::string word = sentence.substr(start, end - start);
        if (std::find(std::begin(primes), std::end(primes), word.length()) != std::end(primes)) {
            result += word + " ";
        }
        start = end + 1;
        end = sentence.find(' ', start);
    }

    std::string lastWord = sentence.substr(start);
    if (std::find(std::begin(primes), std::end(primes), lastWord.length()) != std::end(primes)) {
        result += lastWord;
    }

    return result;
}

int main() {
    assert (words_in_sentence("here is") == "is");
    return 0;
}