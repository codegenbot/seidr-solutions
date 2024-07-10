#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> split_words(string input){
    vector<string> words;
    string word = "";
    for(char c : input){
        if(c == ' '){
            if(!word.empty()){
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if(!word.empty()){
        words.push_back(word);
    }
    if(words.empty()){
        words.push_back("0");
    }
    return words;
}