#include <cassert>
#include <cstring>

int main() {
    char str[] = "asdasnakj";
    assert(strlen(str) == 9);
    return str[strlen(str) - 1] - str[0];
}