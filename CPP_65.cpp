#include <string>

string circular_shift(int x, int shift) {
    string str = to_string(x);
    return substr(str, shift % str.length()) + substr(str, 0, shift % str.length());
}