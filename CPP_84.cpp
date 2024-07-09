```cpp
#include <iostream>
using namespace std;

string solve(int N) {
    string binary = "";
    while (N > 0) {
        if (N % 2 == 0)
            binary = "0" + binary;
        else
            binary = "1" + binary;
        N /= 2;
    }
    return binary;
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    cout << "The binary representation of the number is: " << solve(N) << endl;
}