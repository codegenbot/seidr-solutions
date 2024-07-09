#include <iostream>
#include <string>

int hex_key(std::string num) {
    int count = 0;
    for (char c : num) {
        if (c >= '2' && c <= '7') {
            count++;
        } else if (c == 'B' || c == 'D' || c == 'F') {
            count++;
        }
    }
    return count;
}

int main() {
    assert(hex_key("") == 0);
    return 0;
}