#include <iostream>
#include <string>

using namespace std;

int vowels_count(string s){
    int count = 0;
    for(int i=0; i<s.length(); i++){
        if((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') 
           && (i == s.length() - 1 || !isupper(s[i]))){
            count++;
        }
    }
    return count;
}

int main(){
    assert(vowels_count("ACEDY") == 3);
    return 0;
}