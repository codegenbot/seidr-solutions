#include <string>
#include <cctype>

std::string remove_vowels(std::string text) {
    string result = "";
    for (char c : text) {
        if (!ispunct(c) && !isupper(c) && !islower(c))
            continue;
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') &&
            !ispunct(c) && !isspace(c)) {
            result += c;
        }
    }
    return result;
}

int main() {
    assert(remove_vowels("ybcd") == "ybcd");
    return 0;
}