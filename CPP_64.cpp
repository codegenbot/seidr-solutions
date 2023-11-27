#include <string>

int vowels_count(std::string s){
    int count = 0;
    for(int i=0; i<s.length(); i++){
        if(tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || (tolower(s[i]) == 'u' && i == s.length()-1)){
            count++;
        }
    }
    return count;
}

int main() {
    int count = vowels_count("ACEDY");
    return 0;
}