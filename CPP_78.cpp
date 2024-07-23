#include <string>

int hex_key(string num) {
    int count = 0;
    if (!num.size()) return 0;

    for (char c : num) {
        if ((c >= '2' && c <= '7') || c == 'B' || c == 'D' || c == 'F' || c < '0' || c > '9' || (c >= 'A' && c <= 'F')) {
            return -1;  // Return an error if the input contains invalid characters
        }
        if ((c >= '2' && c <= '7') || c == 'B' || c == 'D' || c == 'F') {
            count++;
        }
    }
    return count;
}