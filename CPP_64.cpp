#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

int vowels_count(std::string s) {
    int count = 0;
    transform(s.begin(), s.end(), s.begin(), ::tolower); // convert string to lowercase
    
    for(int i=0; i<s.length(); i++){
        if((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u')){
            count++;
        }
    }
    
    if(s[s.length()-1] == 'y'){
        count--;
    }
    
    return count;
}

int main() {
    assert(vowels_count("ACEDY") == 3);
    assert(vowels_count("HELLO") == 2);
    assert(vowels_count("World") == 1);
    assert(vowels_count("cOding") == 2);

    return 0;
}