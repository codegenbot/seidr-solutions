#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    // Implement the comparison logic here
    return a == b;
}

std::vector<std::string> split_words(std::string txt){
    // Implement the split_words logic here
}

int main(){
    // Add test cases here
    assert(issame(split_words(""), {"0"}));
    
    return 0;
}