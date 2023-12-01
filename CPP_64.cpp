#include <algorithm>
#include <string>

int vowels_count(std::string s){
    int count = 0;
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            count++;
        }
    }
    
    if(s.length() > 0 && (s[s.length()-1] == 'y' || s[s.length()-1] == 'Y')){
        count--;
    }
    
    return count;
}

int main(){
    assert(vowels_count("ACEDY") == 3);

    return 0;
}