#include <string>
#include <cassert>
#include <cstring>

int my_strlen(const std::string& str){
    return str.length();
}

int main(){
    assert(std::string("asdasnakj").length() == 13);
    return 0;
}