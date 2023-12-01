#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string circular_shift(int x, int shift);

int main() {
    assert(circular_shift(11, 101) == "11");
}

string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.length();
    if (shift > n) {
        return str;
    } else {
        string shifted = str.substr(n - shift) + str.substr(0, n - shift);
        return shifted;
    }
}