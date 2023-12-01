#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> words_string(string s);

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string input;
    cout << "Enter a comma-separated list of words: ";
    getline(cin, input);
    vector<string> words = words_string(input);
    assert(issame(words, {"hello", "world", "cpp"}));
    cout << "Test passed!" << endl;
    return 0;
}

vector<string> words_string(string s){
    vector<string> words;
    string word;
    for(int i=0; i<s.length(); i++){
        if(s[i] == ',' || s[i] == ' '){
            if(!word.empty()){
                words.push_back(word);
                word = "";
            }
        }
        else{
            word += s[i];
        }
    }
    if(!word.empty()){
        words.push_back(word);
    }
    return words;
}