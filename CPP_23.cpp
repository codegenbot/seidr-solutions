#include <string>

int myStrLen(std::string str){
    return str.length();
}

int main() {
    assert(myStrLen("asdasnakj") == 11); 
    return 0;
}