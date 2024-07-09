```cpp
#include <iostream>
using namespace std;

string solve(int N) {
    string binaryRep = "";  
    while (N > 0) {
        if (N % 2 == 0)
            binaryRep = "0" + binaryRep;
        else
            binaryRep = "1" + binaryRep;
        N /= 2;
    }
    return binaryRep;
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    cout << "The binary representation of the number is: " << solve(N) << endl;
}