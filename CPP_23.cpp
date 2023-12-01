#include <string>

int myStrLen(std::string str) {
    return str.length();
}

int main() {
    assert (myStrLen("asdasnakj") == 9);
}