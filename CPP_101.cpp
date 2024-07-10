#include <cassert>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<string> words_string(string s) {
    vector<string> words;
    stringstream ss(s);
    string word;
    while (getline(ss, word, ' ')) {
        if (!word.empty()) {
            words.push_back(word);
        }
    }
    return words;
}

void test_words_string() {
    assert(words_string("ahmed     , gamal") == vector<string>{"ahmed", "gamal"});
}

void test_words_string();