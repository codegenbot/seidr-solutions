#include <cstring>
#include <string>
#include <cassert>

int main() {
    std::string str = "Hello, Contest!";
    assert(str.length() == strlen("Hello, Contest!"));
    return str.length();
}