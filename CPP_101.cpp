#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

vector<string> splitStringAndComma(string s){
    vector<string> words;
    string word = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' ' || s[i] == ','){
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        }
        else{
            word += s[i];
        }
    }
    if(word != ""){
        words.push_back(word);
    }
    return words;
}

int main(){
    vector<string> result = splitStringAndComma("ahmed     , gamal");
    cout << "Output: ";
    for(const string& word : result){
        cout << word << " ";
    }
    cout << endl;

    assert(splitStringAndComma("ahmed     , gamal") == vector<string>{"ahmed", "gamal"});

    return 0;
}