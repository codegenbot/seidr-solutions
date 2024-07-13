#include <cctype>

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            if (isupper(c))
                result += tolower((c - 'A' + 2) % 26 + 'A');
            else
                result += toupper((c - 'a' + 2) % 26 + 'a');
        } else
            result += c;
    }
    return result;
}