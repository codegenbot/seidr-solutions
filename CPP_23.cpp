#include <string>

int customLength(std::string str) {
    return str.length();
}

int main() {
    assert(customLength("asdasnakj") == 12); 
    return 0;
}