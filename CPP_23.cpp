#include <iostream>
#include <cassert>
#include <cstring>

int countVowels(const char* str) {
    int count = 0;
    for (int i = 0; str[i]; ++i)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
        	|| str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            count++;

    return count;
}

int main() {
    const char* str = "asdasnakj";
    assert(countVowels(str) == 3);
    return 0;
}