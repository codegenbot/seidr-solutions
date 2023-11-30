#include <algorithm>
#include <string>

string flip_case(string str) {
    transform(str.begin(), str.end(), str.begin(), [](char c) {
        if (islower(c))
            return toupper(c);
        else if (isupper(c))
            return tolower(c);
        else
            return c;
    });

    return str;
}