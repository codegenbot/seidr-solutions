#include <iostream>
#include <string>
using namespace std;

int vowels_count(std::string s){
    int count = 0;
    for(char c : s){
        if(std::tolower(c) == 'a' || std::tolower(c) == 'e' || std::tolower(c) == 'i' || std::tolower(c) == 'o' || std::tolower(c) == 'u'){
            count++;
        }
    }
    if(!s.empty() && std::tolower(s.back()) == 'y'){
        count++;
    }
    return count;
}