#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> filter_by_prefix(vector<string> words, string prefix){
    vector<string> filtered_words;
    for(const string& word : words){
        if(word.substr(0, prefix.size()) == prefix){
            filtered_words.push_back(word);
        }
    }
    return filtered_words;
}