```cpp
#include <string>
#include <sstream>

string flip_case(std::string str){
    std::stringstream ss;
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c>=65 && c<=90) // uppercase letter
            ss << static_cast<char>(c+32);
        else if(c>=97 && c<=122) // lowercase letter
            ss << static_cast<char>(c-32);
        else 
            ss << c;
    }
    return ss.str();
}