#include <iostream>
#include <string>
using namespace std;

string circular_shift(int x, int shift);

int main() {
    assert(circular_shift(11, 101) == "11");

    return 0;
}

string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.length();
    
    if (shift > n) {
        reverse(str.begin(), str.end());
        return str;
    }
    
    shift %= n;
    string result = str.substr(n - shift) + str.substr(0, n - shift);
    return result;
}