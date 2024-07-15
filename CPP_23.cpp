#include <string>
#include <cassert>
#include <cstring> 

int solve() {
    std::string str = "example";
    assert(str.length() == 7);
    assert(strlen("asdasnakj") == 9);
    
    return strlen(str.c_str());
}