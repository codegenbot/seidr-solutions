#include <string>
#include <cctype>

std::string encrypt(std::string s){
    std::string result = "";
    for(int i=0; i<s.length(); i++){
        if(std::isalpha(s[i])){
            char encrypted_char = (std::tolower(s[i]) - 'a' + 2 * 2) % 26 + 'a';
            if(std::isupper(s[i])){
                encrypted_char = std::toupper(encrypted_char);
            }
            result += encrypted_char;
        } else {
            result += s[i];
        }
    }
    return result;
}

int main(){
    assert(encrypt("a")=="e");
    return 0;
}