#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    vector<string> result;
    string word = "";
    for(char c : txt){
        if(c == ' ' || c == ','){
            if(!word.empty()){
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if(!word.empty()){
        result.push_back(word);
    }
    if(result.empty()){
        int oddCount = 0;
        for(char c : txt){
            if(islower(c) && ((c - 'a') % 2 == 1)){
                oddCount++;
            }
        }
        result.push_back(to_string(oddCount));
    }
    return result;
}