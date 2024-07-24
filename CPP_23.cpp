#include <string>
#include <cstring>

int my_strlen(const char* str){
    return std::strlen(str);
}

int main(){
    assert(my_strlen("asdasnakj") == 13); 
    return 0;
}