#include <string>
#include <cctype>
#include <cassert>

int vowels_count(std::string s){
    int count = 0;
    for(char c : s){
        if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u'){
            count++;
        }
    }
    if(!s.empty() && tolower(s.back()) == 'y'){
        count++;
    }
    return count;
}

int main() {
    assert(vowels_count("ACEDY") == 3);
    return 0;
}