#include <iostream>

using namespace std;

int startsOneEnds(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if ((i == 1 || i % 10 == 1) && (n - 1 > 0)) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Count of numbers that start or end with 1 is: " << startsOneEnds(n) << endl;
    return 0;
}