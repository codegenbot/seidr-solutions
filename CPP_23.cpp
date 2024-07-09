#include <assert.h>
#include <cstring>

int strlen(string str){
    return str.length();
}

int main(){
    assert(strlen("asdasnakj") == 11);
    return 0;
}