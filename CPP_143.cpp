#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string words_in_sentence(string sentence);

int main() {
    assert(words_in_sentence("here is") == "is");
    assert(words_in_sentence("hello world") == "world");
    assert(words_in_sentence("prime numbers are 1, 2, 3, 5, 7") == "numbers 2 3 5 7");
    return 0;
}

string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    for (char c : sentence) {
        if (c != ' ') {
            word += c;
        } else {
            int len = word.length();
            bool isPrime = true;
            for (int i = 2; i * i <= len; i++) {
                if (len % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime && len > 1) {
                result += word + " ";
            }
            word = "";
        }
    }
    int len = word.length();
    bool isPrime = true;
    for (int i = 2; i * i <= len; i++) {
        if (len % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime && len > 1) {
        result += word;
    }
    return result;
}