#include <string>
#include <cstring>

int my_strlen(string str){
    return str.length();
}

#include<assert.h>

int main(){
    assert (my_strlen("asdasnakj") == 13);
    return 0;
}