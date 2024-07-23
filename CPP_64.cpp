#include <string>
int vowels_count(std::string s){
    int count = 0;
    for(int i=0; i<s.length(); i++){
        char c = tolower(s[i]);
        if(c >= 'a' && c <= 'z') {
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                count++;
            }
        } else if(c >= 'A' && c <= 'Z') {
            char c = tolower(s[i]);
            if(c == 'y') {
                count++;
            }
        }
    }
    return count;
}