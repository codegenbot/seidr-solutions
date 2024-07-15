#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> split_words(const string& txt) {
    vector<string> words;
    string word = "";

    for (char c : txt) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }

    if (!word.empty()) {
        words.push_back(word);
    }

    if (words.empty()) {
        int count = 0;
        for (char c : txt) {
            if (islower(c) && (c - 'a') % 2 == 1) {
                count++;
            }
        }

        words.push_back(to_string(count));
    }

    return words;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    assert(issame(split_words("Hello, World!"), {"Hello", "World"}));
    assert(issame(split_words("Lorem ipsum dolor sit amet"), {"Lorem", "ipsum", "dolor", "sit", "amet"}));
    assert(issame(split_words("The quick brown fox jumps over the lazy dog."), {"The", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog."}));
    assert(issame(split_words("12345"), {"12345"}));

    return 0;
}