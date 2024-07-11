#include <string>
#include <cstring>

int strlen(std::string str){
    return str.length();
}

int main() {
    std::cout << strlen("asdasnakj") << '\n';
    return 0;
}