#include <string>
#include <algorithm>

string circular_shift(int x, int shift) {
    string number = to_string(x);
    int n = number.size();

    shift %= n;

    if (shift == 0) {
        return number;
    }

    reverse(number.begin(), number.end());
    reverse(number.begin(), number.begin() + shift);
    reverse(number.begin() + shift, number.end());

    return number;
}