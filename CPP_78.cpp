#include <string>
int hex_key(string num) {
    if (!num.size() || !num.find_first_of("234567BF")) return -1;
    int count = 0;
    for (char c : num) {
        if (c >= '2' && c <= '7' || c == 'B' || c == 'D' || c == 'F') {
            count++;
        }
    }
    return count;
}