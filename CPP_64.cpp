#include <iostream>
#include <string>

int vowels_count(std::string s){
    int count = 0;
    for(int i=0; i<s.length(); i++){
        char c = tolower(s[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            count++;
        }
        else if(c == 'y' && (s.length() == i + 1 || s.back() == 'h')){
            count++;
        }
    }
    return count;
}

int main(){
    assert(vowels_count("ACEDY") == 3);
    std::cout << vowels_count("AEIOUY") << "\n";
    return 0;
}