#include <iostream>
#include <string>
using namespace std;

string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.length();
    if (shift >= n)
        return str;
    else {
        char buffer[n];
        for (int i = 0; i < n; i++) {
            if (i < shift || i >= n - shift)
                buffer[i] = str[i];
            else
                buffer[i] = str[i-shift];
        }
        buffer[n-1] = '\0';
        return string(buffer, n-1);
    }
}

int main() {
    int x, shift;
    cin >> x >> shift;
    cout << circular_shift(x, shift) << endl;
}