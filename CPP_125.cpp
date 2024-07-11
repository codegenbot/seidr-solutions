#include <string>
#include <vector>

bool issame(const vector<string>& vec1, const vector<string>& vec2){
    if(vec1.size() != vec2.size()){
        return false;
    }
    for(size_t i = 0; i < vec1.size(); i++){
        if(vec1[i] != vec2[i]){
            return false;
        }
    }
    return true;
}

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
    if(result.empty()){
        int count = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 == 1){
                count++;
            }
        }
        result.push_back(to_string(count));
    }
    return result;
}