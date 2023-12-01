#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string circular_shift(int x, int shift) {
    string s = to_string(x);
    int n = s.length();
    
    if (shift > n) {
        reverse(s.begin(), s.end());
        return s;
    } else {
        rotate(s.begin(), s.begin() + n - shift, s.end());
        return s;
    }
}

int main() {
    int x, shift;
    cin >> x >> shift;
    
    cout << circular_shift(x, shift) << endl;
    
    return 0;
}