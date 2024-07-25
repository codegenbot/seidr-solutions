#include <iostream>
#include <algorithm>
#include <string>
#include <cassert>

using namespace std;

int vowels_count(const string& s){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int count = 0;
    for(char c : s){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            count++;
        }
    }
    if(!s.empty() && (s.back() == 'y')){
        count--;
    }
    return count;
}

int main(){
    assert(vowels_count("ACEDY") == 3);
    return 0;
}