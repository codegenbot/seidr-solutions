#include <cstring>
#include <cassert>

size_t count_vowels(const char* str) {
    size_t count = 0;
    const char* vowels = "aeiouAEIOU";

    for (size_t i = 0; i < strlen(str); ++i) {
        if (strchr(vowels, str[i])) {
            count++;
        }
    }

    return count;
}