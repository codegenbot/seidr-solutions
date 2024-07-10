#include <iostream>
#include <string>
#include <cctype> // Include for tolower function

int vowels_count(std::string s){
    int count = 0;
    for(char c : s){
        if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u'){
            count++;
        }
    }
    return count;
}