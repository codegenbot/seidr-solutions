#include <string>
#include <cctype>

int hex_key(std::string num) {
    int count = 0;
    for (char c : num) {
        if (!isxdigit(c)) { 
            count++;
        }
    }
    return count;
}

int main() {
    assert(hex_key("") == 0);
    return 0;
}