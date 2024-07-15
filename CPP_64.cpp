#include <iostream>
#include <cassert>
#include <string>

int vowels_count(std::string s);

int main() {
    assert(vowels_count("ACEDY") == 3);

    return 0;
}

int vowels_count(std::string s){
    int count = 0;
    for(char c : s){
        if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || (tolower(c) == 'u' && c == s.back())){
            count++;
        }
    }
    return count;
}