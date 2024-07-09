#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <cctype>

bool issame(std::vector<std::string> a, std::vector<std::string> b);

std::vector<std::string> select_words(std::string s, int n){
    // Implementation remains the same
}

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

int main(){
    assert(issame(select_words("a b c d e f", 1), std::vector<std::string>{"b", "c", "d", "f"}));
    return 0;
}