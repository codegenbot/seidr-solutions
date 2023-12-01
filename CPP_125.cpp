#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> split_words(string txt);

vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for(int i=0; i<txt.length(); i++){
        if(txt[i] == ' '){
            hasWhitespace = true;
            if(word != ""){
                result.push_back(word);
                word = "";
            }
        }
        else if(txt[i] == ','){
            hasComma = true;
            if(word != ""){
                result.push_back(word);
                word = "";
            }
        }
        else{
            word += txt[i];
        }
    }
    
    if(word != ""){
        result.push_back(word);
    }
    
    if(!hasWhitespace && !hasComma){
        int count = 0;
        for(int i=0; i<word.length(); i++){
            if(islower(word[i])){
                count++;
            }
        }
        result.push_back(to_string(count));
    }
    
    return result;
}

int main(){
    // Test cases
    assert(split_words("") == vector<string>{"0"});
    assert(split_words("Hello, World!") == vector<string>{"Hello", "World!"});
    // Add more test cases
    
    return 0;
}