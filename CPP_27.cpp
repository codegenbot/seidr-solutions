#include <string>

string flip_case(string str) {
    string flipped;
    for (char c : str) {
        if (isalpha(c)) {
            if (isupper(c))
                flipped += tolower(c);
            else
                flipped += toupper(c);
        } else
            flipped += c;
    }
    return flipped;