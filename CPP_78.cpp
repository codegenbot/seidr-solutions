#include <string>

int hex_key(string num) {
    if (!num.size() || !num.size()) {
        return -1;
    }
    
    int count = 0;
    for (char c : num) {
        if (c >= '2' && c <= '7' || c == 'B' || c == 'D' || c == 'F') {
            count++;
        } else if ((c < '0' || c > '9') && (c < 'A' || c > 'F') && (c < 'a' || c > 'f')) {
            return -1;
        }
    }
    
    return count;
}