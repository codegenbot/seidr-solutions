#include <string>

int is_bored(const std::string& str) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find("I", pos)) != std::string::npos) {
        if (str[pos] == 'I' && (str[pos + 1] == '.' || str[pos + 1] == '?' || str[pos + 1] == '!')) {
            count++;
        }
        pos = str.find("I", pos);
    }
    return count;
}

int main() {
    assert(is_bored("You and I are going for a walk") == 0);
    return 0;
}