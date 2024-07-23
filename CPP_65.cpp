#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string circular_shift(int x, int shift) {
    ostringstream str;
    str << x; // Convert integer to string
    int n = str.str().length();
    if (shift >= n)
        return str.str();
    else {
        string result = str.str().substr(shift) + str.str().substr(0, shift);
        return result;
    }
}

int main() {
    assert(circular_shift(11, 101) == "11");
    return 0;
}