```c
#include <string>

std::string remove_vowels(std::string text) {
    std::string result;
    for (char c : text) {
        if (!strchr("aeiouAEIOU", c)) {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string new_result = remove_vowels("ybcd");
    assert(new_result == "ybcd");
    return 0;
}