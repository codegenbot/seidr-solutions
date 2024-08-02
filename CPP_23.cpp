#include <iostream>
#include <cassert>
#include <cstring>

int countVowels(const char* str) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    const char* str = "asdasnakj";
    assert(countVowels(str) == 3);
    return 0;
}