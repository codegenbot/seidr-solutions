#include <string>
#include <cctype>

std::string remove_vowels(std::string text){
    std::string result = "";
    for(char c : text){
        if(!strchr("aeiouAEIOU",c)){
            result += tolower(c);
        }
    }
    return result;
}

int main(){
    assert (remove_vowels("ybcd") == "bcd");
    return 0;
}