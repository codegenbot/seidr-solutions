#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cassert>

using namespace std;

vector<string> words_string(string s){
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

int main() {
    string input = "Hello World! This is a C++ code contest problem.";
    vector<string> output = words_string(input);
    for (const auto &word : output) {
        cout << word << endl;
    }
    return 0;
}