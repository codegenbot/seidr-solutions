#include <cctype>

int checkText(const string& txt) {
    size_t pos = txt.find_last_of(" ");
    return pos == string::npos || !isalpha(txt.back());
}