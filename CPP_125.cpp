#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> split_words(string input){
    if(input.empty()){
        return {"0"};
    }
    vector<string> words;
    string word = "";
    for(char c : input){
        if(c == ' '){
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    if(!word.empty()){
        words.push_back(word);
    }
    return words;
}