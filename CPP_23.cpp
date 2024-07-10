#include <string>

int myStrLen(std::string str){
    return str.length();
}

int main() {
    assert(myStrLen("asdasnakj") == 12);
    return 0;
}