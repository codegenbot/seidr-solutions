#include <string>

vector<string> split_words(string txt) {
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for(char c : txt){
        if(c == ' '){
            hasWhitespace = true;
            result.push_back(word);
            word = "";
        } else if(c == ','){
            hasComma = true;
            result.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    
    if(hasWhitespace || hasComma){
        if(word != ""){
            result.push_back(word);
        }
    } else {
        int oddCount = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 == 1){
                oddCount++;
            }
        }
        result.push_back(to_string(oddCount));
    }
    
    return result;
}