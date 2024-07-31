#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> filter_by_substring(vector<string> words, string substr){
    vector<string> result;
    for(const auto& word : words){
        if(word.find(substr) != string::npos){
            result.push_back(word);
        }
    }
    return result;
}