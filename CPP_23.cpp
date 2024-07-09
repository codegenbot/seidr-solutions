#include <string>
#include <cassert>
#include <cstring>

int stringLength(const std::string& str){
    return str.length();
}

int main() {
    assert(stringLength("asdasnakj") == 12); 
    return 0;
}