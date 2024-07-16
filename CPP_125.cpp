#include <vector>
#include <string>
#include <cassert>
#include <cctype>

bool issame(const string& s1, const string& s2);

vector<string> split_words(string txt){
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
    if(result.size() == 1 && result[0].find_first_not_of("abcdefghijklmnopqrstuvwxyz") == string::npos){
        int oddCount = 0;
        for(char c : result[0]){
            if(islower(c) && (c - 'a') % 2 == 1){
                oddCount++;
            }
        }
        result[0] = to_string(oddCount);
    }
    return result;
}