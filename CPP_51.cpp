#include <iostream>
#include <string>

std::string remove_vowels(std::string text){
    std::string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] != 'a' && text[i] != 'e' && text[i] != 'i' && text[i] != 'o' && text[i] != 'u' 
           && text[i] != 'A' && text[i] != 'E' && text[i] != 'I' && text[i] != 'O' && text[i] != 'U'){
            result += text[i];
        }
    }
    return result;
}

int main(){
    std::string text;
    std::cout << "Enter a string: ";
    std::cin >> text;
    std::cout << "After removing vowels: " << remove_vowels(text) << std::endl;
    return 0;
}