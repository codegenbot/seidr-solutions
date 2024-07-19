#include <iostream>
#include <cassert>
#include <cstring>

int customStringLength(const char* str) {
    int length = 0;
    while (*str) {
        ++length;
        ++str;
    }
    return length;
}