#include <string>
#include <algorithm>
#include <cassert>

int vowels_count(std::string s){
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    int count = 0;
    for(char c : s){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            count++;
        }
    }
    if(!s.empty() && (s.back() == 'y' || s.back() == 'Y')){
        count++;
    }
    return count;
}

int main(){
    // Your existing code here
}