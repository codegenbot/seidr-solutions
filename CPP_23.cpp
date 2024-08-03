#include <cassert>
#include <cstring>

int testFunction(const char* str){
    return strlen(str);
}

int main(){
    assert(testFunction("asdasnakj") == 9);
}