#include <iostream>
#include <cassert>

using namespace std;

int vowels_count(const char*);

__BEGIN_DECLS
__END_DECLS

int vowels_count(const char* str) {
    int count = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
            str[i] == 'o' || str[i] == 'u') {
            count++;
        }
    }
    return count;
}