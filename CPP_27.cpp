#include <string>
#include <cctype>
#include <cassert>

std::string flip_case(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        if(ch >= 'a' && ch <= 'z')
            result += toupper(ch);
        else if(ch >= 'A' && ch <= 'Z')
            result += tolower(ch);
        else
            result += ch;
    }
    return result;
}

int main() {
    assert (flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}