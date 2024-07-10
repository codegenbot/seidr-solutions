```cpp
#include <string>
#include <cassert>
using namespace std;

string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.length();
    if (shift >= n)
        return str;
    else {
        string result = str.substr(shift % n) + str.substr(0, shift % n);
        return result;
}

int main() { 
    assert(circular_shift(11, 2) == "1111");
    return 0;
}