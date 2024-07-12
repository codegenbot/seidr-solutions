#include <string>
#include <cstring>
#include <cassert>

int custom_strlen(string str){
    return str.length();
}

int main(){
    assert (custom_strlen("asdasnakj") == 12);
    return 0;
}