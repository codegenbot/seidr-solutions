#include <string>

int is_bored(std::string str) {
    int count = 0;
    for (char c : std::toupper(str)) {
        if (c == 'I') {
            count++;
        }
    }
    return count;