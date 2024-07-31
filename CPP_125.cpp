#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
}

std::vector<std::string> split_words(std::string txt){
    std::vector<std::string> words;
    // Split the input text into words based on spaces
    return words;
}

int main(){
    assert(issame(split_words(""), {""}));
    
    return 0;
}