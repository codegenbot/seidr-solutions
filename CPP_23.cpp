#include <string>

size_t myStrLen(std::string str){
    return str.length();
}

int main() {
    assert(myStrLen("asdasnakj") == 9);
    
    return 0;
}