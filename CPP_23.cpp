#include <string>
#include <cassert>
#include <cstring>

int str_len(const std::string& str){
    return strlen(str.c_str());
}

int otherMain(int) {
    assert(str_len("asdasnakj") == 12); 
    return 0;
}