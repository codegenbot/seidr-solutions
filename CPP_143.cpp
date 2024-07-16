#include <iostream>
#include <string>
using namespace std;

string words_in_sentence(string sentence);

int main() {
    assert(words_in_sentence("here is") == "is");

    return 0;
}

string words_in_sentence(string sentence) {
    string result = "";
    string word = "";
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ' || i == sentence.length() - 1) {
            if (i == sentence.length() - 1) {
                word += sentence[i];
            }
            if (word.length() > 1) {
                bool is_prime = true;
                for (int j = 2; j * j <= word.length(); j++) {
                    if (word.length() % j == 0) {
                        is_prime = false;
                        break;
                    }
                }
                if (is_prime) {
                    result += word + " ";
                }
            }
            word = "";
        } else {
            word += sentence[i];
        }
    }
    if (result.length() > 0) {
        result.pop_back();
    }
    return result;
}