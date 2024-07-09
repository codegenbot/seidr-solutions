#include <iostream>

using namespace std;

int startsOneEnds(int n) {
    int count = 0;
    for (long long i = 1; i <= 9LL; i++) {
        if (i == 1 || i % 10 == 1)
            count++;
        if (i > 0 && i < 10)
            continue;
        for (long long j = 0; j < n - 1; j++) {
            int digit = (i / pow(10, n - 1 - j)) % 10;
            if (digit == 0 || digit == 9)
                break;
        }
        count++;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "The count of the numbers that start or end with 1 is: " << startsOneEnds(n) << endl;
    return 0;
}