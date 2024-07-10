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

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(size_t i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    assert(issame(split_words("") ,{"0"}));
    // Add more test cases here

    return 0;
}