```c
#include <cassert>
#include <string>
#include <cstring>

int myStrlen(const std::string& str){
    return str.size();
}

int main_function(){
    assert(myStrlen("asdasnakj") == 11);
    return 0;
}