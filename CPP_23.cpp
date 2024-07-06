#include <string>
#include <cassert>
#include <cstring>

int str_len(const std::string& str){
    return strlen(str.c_str());
}

int main() {
    assert(str_len("asdasnakj") == 11); 
    return 0;
}