#include <string>
#include <cctype>

std::string remove_vowels(std::string text){
    std::string result = "";
    for(char c : text){
        if(!isvowel(c)){
            result += c;
        }
    }
    return result;
}

bool isvowel(char c){
    c = tolower(c);
    switch(c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}

int main() {
    assert(remove_vowels("ybcd") == "ybcd");
    // add your code here
}