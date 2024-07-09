#include <cassert>
#include <string>

int my_strlen(string str){
    return str.length();
}

int mainOther() {
    assert(my_strlen("asdasnakj") == 12); 
    return 0;
}