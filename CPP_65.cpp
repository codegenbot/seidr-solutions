#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.length();
    if (shift > n) {
        reverse(str.begin(), str.end());
        return str;
    } else {
        string shifted = str.substr(n - shift) + str.substr(0, n - shift);
        return shifted;
    }
}

int main() {
    assert(circular_shift(11, 101) == "11");
    
    // Additional test cases
    assert(circular_shift(12345, 0) == "12345");
    assert(circular_shift(12345, 1) == "51234");
    assert(circular_shift(12345, 2) == "45123");
    assert(circular_shift(12345, 3) == "34512");
    assert(circular_shift(12345, 5) == "12345");
    assert(circular_shift(12345, 10) == "54321");
    
    return 0;
}