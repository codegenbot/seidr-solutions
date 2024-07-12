#include <string>

int custom_strlen(const std::string& str){
    return str.length();
}

int main() {
    assert(custom_strlen("asdasnakj") == 13);
    return 0;
}