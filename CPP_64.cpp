#include <string>
int vowels_count(std::string s){
    int count = 0;
    for(char c : s){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            count++;
        }
    }
    if(!s.empty() && (s.back() == 'y' || s.back() == 'Y')){
        count++;
    }
    return count;
}