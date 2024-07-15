#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> words, std::string word){
    for(const auto& w : words){
        if(w == word){
            return true;
        }
    }
    return false;
}

std::vector<std::string> split_words(std::string txt){
    std::vector<std::string> result;
    std::string word = "";
    for(char c : txt){
        if(c == ' ' || c == ','){
            if(!word.empty()){
                if(!issame(result, word)){
                    result.push_back(word);
                }
                word = "";
            }
        } else {
            word += c;
        }
    }
    if(!word.empty()){
        if(!issame(result, word)){
            result.push_back(word);
        }
    }
    if(result.empty()){
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

int main() {
    std::string text;
    std::cout << "Enter a text: ";
    std::getline(std::cin, text);
    
    std::vector<std::string> words = split_words(text);
    for(const auto& word : words){
        std::cout << word << " ";
    }
    
    return 0;
}