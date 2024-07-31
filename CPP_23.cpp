#include <cstring>
#include <string>

int calculateStringLength(const std::string& str) {
    return str.length();
}

int main() {
    assert (calculateStringLength("asdasnakj") == 9);
}