#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
}

std::vector<std::string> split_words(const std::string& s) {
    // Implement split_words function
}

int main() {
    assert(issame(split_words("") ,{"0"}));
   
    return 0;
}