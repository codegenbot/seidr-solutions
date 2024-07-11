#include <string>
#include <cctype>

using namespace std;

int closest_integer(string value) {
    bool seenDecimal = false;
    int integerPart = 0;

    for (char c : value) {
        if (!seenDecimal && !isdigit(c)) {
            seenDecimal = true;
        } else if (seenDecimal && isdigit(c)) {
            return -1; 
        } else {
            integerPart = (integerPart * 10) + (c - '0');
        }
    }

    return integerPart;
}