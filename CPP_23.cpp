#include <string>

int myStrLen(std::string str) {
    return str.length();
}

int main() {
    // Example usage and test case
    assert (myStrLen("asdasnakj") == 9);
}