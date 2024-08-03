#include <iostream>
#include <string>

using namespace std;

string circular_shift(int x, int shift);

int main() {
    int x, shift;
    cin >> x >> shift;
    cout << circular_shift(x, shift) << endl;
    return 0;
}

string circular_shift(int x, int shift) {
    string numStr = to_string(x);
    int n = numStr.size();
    shift %= n;
    if (shift == 0) {
        return numStr;
    } else {
        string shiftedNum = numStr.substr(n - shift) + numStr.substr(0, n - shift);
        return shiftedNum;
    }
}