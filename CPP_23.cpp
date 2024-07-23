#include <string>
#include <cstring>

int my_length(std::string str) {
    return str.length();
}

int main() {
    assert(my_length("asdasnakj") == 11); 
}