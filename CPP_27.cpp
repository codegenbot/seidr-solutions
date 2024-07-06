#include <string>
#include <cctype>

std::string flip_case(std::string str){
    return std::string( flip_case(str.c_str()) );
}