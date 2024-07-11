#include <iostream>
#include <vector>
#include <string>

vector<string> words_string(string s);

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> words_string(string s){
    vector<string> words;
    string word = "";
    for(char c : s){
        if(c == ' ' || c == ','){
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
    return words;
}

int main() {
    string input;
    getline(cin, input);
    vector<string> words = words_string(input);
    for(const string& word : words){
        cout << word << endl;
    }
    return 0;
}