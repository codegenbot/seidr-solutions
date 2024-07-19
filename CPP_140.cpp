```cpp
#include <iostream>
#include <string>

std::string fix_spaces(std::string text){
    std::string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' '){
            if(i+1 < text.length() && text[i+1] == ' '){
                if(result.length() > 0) result += '-';
                else continue;
            }
            result += '_';
        }else{
            result += text[i];
        }
    }
    return result;
}

int main(){
    std::cout << "Enter a string: ";
    std::string text;
    std::cin >> text;
    {  
        std::cout << "Fixed string: " << fix_spaces(text) << std::endl;
    }  
    return 0;
}