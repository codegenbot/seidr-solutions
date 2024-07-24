#include <cstring>
#include <assert.h>

int my_strlen(const char* str){
    int len = 0;
    while(str[len] != '\0')
        len++;
    return len;
}

int main(){
    assert(my_strlen("asdasnakj") == 13);
    return 0;
}