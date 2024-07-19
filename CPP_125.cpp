#include <iostream>
#include <vector>
#include <string>
#include <cassert>

// Function prototype
bool issame(std::vector<std::string> a, std::vector<std::string> b);

// Implement the issame function
bool issame(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(size_t i=0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

std::vector<std::string> split_words(const std::string& txt){
    std::vector<std::string> result;
    std::string word = "";
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
    if(result.size() == 0){
        int count = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 == 1){
                count++;
            }
        }
        result.push_back(std::to_string(count));
    }
    return result;
}

int main(){
    assert(issame(split_words("") ,{"0"})); // Test the split_words function
    return 0;
}