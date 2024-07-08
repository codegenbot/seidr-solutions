#include <string>
#include <cctype>

std::string encode(std::string message) {
    std::string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            result += (c == toupper(base)) ? tolower(base) : toupper(base);
            switch (c - base) {
                case 0:
                case 1:
                    base = (base == 'A') ? 'C' : 'b';
                    break;
                default:
                    base += 2;
                    if (base > 'z' || base > 'Z')
                        base -= 26;
            }
            result += base;
        } else {
            result += c;
        }
    }
    return result;
}