#include <iostream>

using namespace std;

int startsOneEnds(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i == 9) {
            count += pow(10, n - 1);
        } else {
            count += pow(10, n - 1) * (i != 1);
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Count of numbers starting or ending with 1 is: " << startsOneEnds(n) << endl;
    return 0;
}