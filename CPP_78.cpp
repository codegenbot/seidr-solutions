#include <string>
#include <cctype>

int hex_key(std::string num) {
    int count = 0;
    for (char c : num) {
        if (!std::isdigit(c) && !std::ispunct(c) && !std::isxdigit(c)) { 
            count++;
        }
    }
    return count;

}

int main() {
    assert(hex_key("") == 0);
    return 0;
}