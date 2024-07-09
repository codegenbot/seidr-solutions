#include <cassert>
#include <string>
#include <cstring>

int custom_strlen(std::string str){
    return std::strlen(str.c_str());
}