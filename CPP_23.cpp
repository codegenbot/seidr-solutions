#include <string>
#include <cstring> // Add this line

int calculateStringLength(const std::string& str) {
    return str.size();
}

int main() {
    assert(strlen("asdasnakj") == 9);
    return 0;
}