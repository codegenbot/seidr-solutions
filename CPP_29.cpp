#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> filter_by_prefix(vector<string> words, string prefix){
    vector<string> filtered_words;
    for(const string& word : words){
        if(word.substr(0, prefix.size()) == prefix){
            filtered_words.push_back(word);
        }
    }
    return filtered_words;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}