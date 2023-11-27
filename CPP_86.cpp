#include <iostream>
#include <algorithm>
#include <string>
#include <cassert>

std::string anti_shuffle(std::string s){
    std::string result = "";
    std::string word = "";
    
    for(int i=0; i<s.length(); i++){
        if(s[i] != ' '){
            word += s[i];
        }
        else{
            std::sort(word.begin(), word.end());
            result += word + " ";
            word = "";
        }
    }
    
    std::sort(word.begin(), word.end());
    result += word;
    
    return result;
}

int main(){
    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    
    std::cout << "Test case passed!" << std::endl;

    return 0;
}