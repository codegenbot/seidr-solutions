#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(char a, char b) {
    return (std::tolower(a) == std::tolower(b));
}

std::vector<std::string> split_words(std::string txt){
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
    if(result.empty()){
        result.push_back(std::to_string(std::count_if(txt.begin(), txt.end(), [](char c){return std::islower(c) && (c-'a') % 2 == 1;})));
    }
    return result;
}

int main() {
    assert(issame('a', 'A'));
    assert(issame('b', 'B'));
    assert(issame('c', 'C'));

    std::string input_str = "Hello, World";
    std::vector<std::string> words = split_words(input_str);
    for(const auto& word : words){
        std::cout << word << std::endl;
    }

    assert (split_words("").front() == "0");

    return 0;
}