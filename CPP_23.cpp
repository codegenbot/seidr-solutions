#include <string>

int strlen(const std::string& str){
    return str.length();
}

int main() {
    assert(strlen("asdasnakj") == 11); 
    return 0;
}