#include <iostream>
#include <algorithm> // for reverse and rotate
#include <string>

using namespace std;

string circular_shift(int x, int shift);

int main() {
    assert(circular_shift(11, 101) == "11");
    // add more test cases here

    return 0;
}

string circular_shift(int x, int shift) {
    string num = to_string(x);
    int n = num.size();
    
    if (shift > n) {
        reverse(num.begin(), num.end());
        return num;
    }
    
    shift %= n;
    rotate(num.rbegin(), num.rbegin() + shift, num.rend());
    
    return num;
}