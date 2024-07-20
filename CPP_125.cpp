#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

std::vector<std::string> split_words(std::string txt);

int main() {
    assert(issame(split_words(""), {"0"}));
    return 0;
}

std::vector<std::string> split_words(std::string txt){
    std::vector<std::string> result;
    std::string word = "";
    bool hasWhitespace = false;
    for(char c : txt){
        if(c == ' '){
            result.push_back(word);
            word = "";
            hasWhitespace = true;
        } else if(c == ','){
            result.push_back(word);
            word = "";
            hasWhitespace = true;
        } else {
            word += c;
        }
    }
    if(word != ""){
        result.push_back(word);
    }
    if(result.size() == 0 && !hasWhitespace){
        int count = 0;
        for(char c : txt){
            if(islower(c) && (c-'a') % 2 == 1){
                count++;
            }
        }
        result.push_back(std::to_string(count));
    }
    return result;
}