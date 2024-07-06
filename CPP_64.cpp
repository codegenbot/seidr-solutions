#include <string>
using namespace std;

int vowels_count(const char *s) {
    int count = 0;
    for (char c : string(s)) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            (c == 'y' && ((string(s)).back() == 'y'))) {
            count++;
        }
    }
    return count;
}