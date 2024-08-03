#include <cassert>
#include <cstring>

int testFunction(const char* str){
    return strlen(str);
}

int testMain(){
    assert(testFunction("asdasnakj") == 9);
}