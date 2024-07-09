#include <string>
#include <cassert>
#include <cstring>

int strlenFunction(std::string str){
    return str.length();
}

int main() {
    assert(strlenFunction("asdasnakj") == 12); 
    return 0;
}