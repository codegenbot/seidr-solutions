```cpp
#include <iostream>
#include <string>

std::string fix_spaces(std::string text) {
    std::string result = "";
    for(int i=0; i < text.length(); i++){
        if(text[i] == ' '){
            if(i+1 < text.length() && text[i+1] == ' '){
                if(result.back() != '-' && i > 0 && text[i-1] != ' '){
                    result += '-';
                }
            }else{
                result += '_';
            }
        }else{
            result += text[i];
        }
    }
    return result;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    return 0;
}