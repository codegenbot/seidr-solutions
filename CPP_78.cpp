```
#include <string>

int hex_key(string num) {
    if (!is_hex(num)) {
        return -1;
    }
    int count = 0;
    for (char c : num) {
        if (c >= '2' && c <= '7') count++;
        else if ((c >= 'A' && c <= 'B') || (c >= 'D' && c <= 'F')) count++;
    }
    return count;
}

bool is_hex(string s) {
    for (char c : s) {
        if (!((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f'))) {
            return false;
        }
    }
    return true;
}