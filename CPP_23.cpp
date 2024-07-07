#include <string>

int custom_strlen(std::string str){
    return str.length();
}

int main() {
    assert(custom_strlen("asdasnakj") == 12);
    return 0;
}