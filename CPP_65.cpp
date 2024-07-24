#include <iostream>
#include <algorithm>
#include <string>
#include <cassert>

using namespace std;

string circular_shift(int x, int shift) {
    string num_str = to_string(x);
    int n = num_str.size();
    shift %= n;
    if (shift == 0) {
        return num_str;
    }
    if (shift > n) {
        reverse(num_str.begin(), num_str.end());
        return num_str;
    }
    return num_str.substr(n - shift) + num_str.substr(0, n - shift);
}

int main() {
    assert(circular_shift(11, 101) == "11");
    assert(circular_shift(12345, 2) == "45123");
    assert(circular_shift(87654321, 5) == "87654321");
    
    cout << "All test cases passed successfully!" << endl;
    
    return 0;
}