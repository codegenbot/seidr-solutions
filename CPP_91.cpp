#include <string>
#include <cctype>

int is_bored(std::string str) {
    int count = 0;
    for (char c : str) {
        if (::toupper(c) == 'I') {
            count++;
        }
    }
    return count;

}