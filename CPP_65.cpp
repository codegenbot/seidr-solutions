#include <string>

using namespace std;

string circular_shift(int x, int shift) {
    string str = to_string(x);
    int len = str.length();
    if (shift >= len) {
        return str;
    }
    string result = str.substr(shift) + str.substr(0, shift);
    return result;
}