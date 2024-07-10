#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<string> split_words(string input){
    if(input.empty()){
        return {""};
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

int main(){
    string input;
    getline(cin, input);
    vector<string> result = split_words(input);
    for(const string& word : result){
        cout << word << " ";
    }
    cout << endl;
    return 0;
}