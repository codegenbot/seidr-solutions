#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        if (n > 1) {
            for (long long j = 1; j < i; j++) {
                if (j % 10 != 1 && j / pow(10, n - 1) != 1) {
                    break;
                }
                if (j == i - 1) count++;
            }
        } else {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Count of numbers that start or end with 1 is: " << starts_one_ends(n) << endl;
    return 0;
}