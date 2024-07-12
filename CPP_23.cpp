#include <string>
#include <cstring>
#include <cassert>

int strlenFunc(std::string str){
    return str.length();
}

int main(){
    assert (strlenFunc("asdasnakj") == 12);
    return 0;
}