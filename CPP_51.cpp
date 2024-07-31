#include <iostream>
#include <string>
#include <cassert>

std::string remove_vowels(const std::string& text) {
    std::string result = "";
    for(auto c : text){
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U'){
            result += c;
        }
    }
    return result;
}

int main(){
    assert(remove_vowels("ybcd") == "ybcd");
    return 0;
}