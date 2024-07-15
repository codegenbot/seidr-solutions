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
    assert(issame(split_words("This is a test"), {"This", "is", "a", "test"}));
    assert(issame(split_words("123,456,789"), {"123", "456", "789"}));
    assert(issame(split_words("OneWord"), {"OneWord"}));
    
    return 0;
}