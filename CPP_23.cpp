#include <string>
#include <cassert>
#include <cstring>

int my_strlen(const std::string& str){
    return str.length();
}

int main(){
    assert(strlen("asdasnakj") == 13);
    return 0;
}