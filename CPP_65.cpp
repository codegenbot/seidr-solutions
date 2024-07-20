#include <iostream>
#include <string>
#include <vector>

using namespace std;

string circular_shift(int x, int shift) {
    string str = to_string(x);
    vector<char> chars(str.begin(), str.end());
    
    if (shift >= str.length()) {
        reverse(chars.begin(), chars.end());
    } else {
        rotate(chars.begin() + shift, chars.end(), chars.begin() + str.length());
    }
    
    return string(chars.begin(), chars.end());
}

int main() {
    int x, shift;
    cout << "Enter an integer: ";
    cin >> x;
    cout << "Enter the number of shifts: ";
    cin >> shift;
    cout << circular_shift(x, shift) << endl;
    return 0;
}