#include <assert.h>
#include <string>
#include <cstring>

int str_len(string str){
    return str.length();
}

int main(){
    assert(str_len("asdasnakj") == 11);
    return 0;
}