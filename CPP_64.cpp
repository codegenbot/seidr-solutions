#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int vowels_count(string s);

int main() {
    assert(vowels_count("ACEDY") == 3);
    // Add more test cases

    return 0;
}

int vowels_count(string s) {
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || 
           tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || 
           (tolower(s[i]) == 'u' && i == s.length() - 1)){
            count++;
        }
    }
    return count;
}