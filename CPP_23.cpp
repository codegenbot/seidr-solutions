#include <string>
#include <cassert>
#include <cstring>

int my_strlen(std::string str){
    return std::strlen(str.c_str());
}

int main(){
    assert(my_strlen("asdasnakj") == 12);
    // You can call your function here.
    return 0;
}