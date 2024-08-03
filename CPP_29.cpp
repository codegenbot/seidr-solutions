#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> filter_by_prefix(vector<string> words, string prefix){
    vector<string> filtered_words;
    for (const auto &word : words) {
        if (word.substr(0, prefix.size()) == prefix) {
            filtered_words.push_back(word);
        }
    }
    return filtered_words;
}

int main() {
    assert(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx") == vector<string>{"xxx", "xxxAAA", "xxx"});
    return 0;
}