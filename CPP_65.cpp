#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string circular_shift(int x, int shift) {
    string num = to_string(x);
    int n = num.length();
    
    if (shift > n) {
        reverse(num.begin(), num.end());
        return num;
    }
    
    shift %= n;
    string result = num.substr(n - shift) + num.substr(0, n - shift);
    return result;
}

int main() {
    assert(circular_shift(11, 101) == "11");
    assert(circular_shift(12345, 3) == "34512");
    assert(circular_shift(98765, 2) == "65987");
    assert(circular_shift(24680, 5) == "06824");
    // Add more test cases here
    
    cout << "All test cases passed!" << endl;
    return 0;
}