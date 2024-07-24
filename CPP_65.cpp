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
    
    // Read input from the user
    int x, shift;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter a shift value: ";
    cin >> shift;
    
    // Calculate and display the circular shift result
    cout << "Circularly shifted number: " << circular_shift(x, shift) << endl;
    
    return 0;
}