#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> split_words(string txt);

int main() {
    string input;
    getline(cin, input);
    
    vector<string> words = split_words(input);
    
    for (string word : words) {
        cout << word << endl;
    }
    
    return 0;
}

vector<string> split_words(string txt){
    vector<string> words;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;

    for(int i = 0; i < txt.length(); i++){
        if(txt[i] == ' '){
            hasWhitespace = true;
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        }
        else if(txt[i] == ','){
            hasComma = true;
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        }
        else{
            word += txt[i];
        }
    }

    if(word != ""){
        words.push_back(word);
    }

    if(words.empty()){
        words.push_back(to_string(3));
    }

    return words;
}