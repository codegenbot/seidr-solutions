#include <string>
#include <cctype>
#include <cassert>

std::string remove_vowels(std::string text) {
    std::string result = "";
    for (char c : text) {
        if (!std::islower(c)) {
            result += c;
        }
    }
    return result;
}

int main() {
    assert(remove_vowels("ybcd") == "ybcd");
    return 0;
}