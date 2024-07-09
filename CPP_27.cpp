#include <string>
#include <cctype>
#include <cassert>

std::string flip_case(std::string str){
    std::string result = "";
    for(char c : str){
        if(std::isalpha(c)) {
            if(std::islower(c))
                result += toupper(c);
            else
                result += tolower(c);
        }
        else
            result += c;
    }
    return result;
}

int main() {
    assert (flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}