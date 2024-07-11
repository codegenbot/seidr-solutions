#include <iostream>
#include <string>

string remove_vowels(string text){
    string result = "";
    for(char c : text){
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && 
           tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && 
           tolower(c) != 'o' && tolower(c) != 'u')
            result += c;
    }
    return result;
}

int main(){
    string output = remove_vowels("ybcd");
    std::cout << output << std::endl;
    return 0;
}