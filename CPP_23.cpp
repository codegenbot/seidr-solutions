#include <string>

int strlen(const std::string& str){
    return str.length();
}

int main() {
    assert(strlen("asdasnakj") == 13); 
    return 0;
}