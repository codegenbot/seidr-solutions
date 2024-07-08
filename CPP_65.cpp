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
        int i;
        for (i = 0; i < n - shift; i++)
            buffer[i] = str[shift];
        for (int j = 0; j < shift; j++) {
            if (i < n)
                buffer[i++] = str[j];
            else
                break;
        }
        return string(buffer);
    }
}

int main() {
    int x, shift;
    cin >> x >> shift;
    cout << circular_shift(x, shift) << endl;
}