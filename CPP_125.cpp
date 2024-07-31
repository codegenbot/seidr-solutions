#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
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
    if(result.size() == 0){
        result.push_back(std::to_string(std::count_if(txt.begin(), txt.end(), [](char c){return std::islower(c) && (c-'a') % 2 == 1;})));
    }
    return result;
}

int main() {
    assert(issame('a', 'A'));
    assert(issame('b', 'B'));
    assert(issame('c', 'C'));
    
    assert(issame('a', 'a'));
    assert(issame('b', 'b'));
    assert(issame('C', 'c'));

    std::vector<std::string> expected = {"0"};
    std::vector<std::string> actual = split_words("");
    assert(actual == expected);

    for(const auto& word : actual){
        std::cout << word << std::endl;
    }

    return 0;
}