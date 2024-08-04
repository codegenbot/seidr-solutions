#include <string>
#include <cassert>

bool is_nested(const char* str) {
    int count = 0;
    for (const char* ptr = str; *ptr != '\0'; ptr++) {
        if (*ptr == '[') {
            count++;
        } else if (*ptr == ']' && count > 0) {
            count--;
        }
    }
    return count != 0;
}

int main() {
    assert (is_nested("]]]]]]]]") == false);
    return 0;
}