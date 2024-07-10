#include <string>
#include <cctype>

int is_bored(std::string str) {
    int count = 0;
    for (char c : std::toupper(str)) {
        if (c == 'I') {
            count++;
        }
    }
    return count;
}

int main() {
    assert(is_bored("You and I are going for a walk") == 3);
    return 0;
}