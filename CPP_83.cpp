#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9LL; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        for (long long j = 1; j < (n - 1); j++) {
            int num = i * 10 + j;
            if (num >= 10 && num <= 99) {
                if (num / 10 == 1 || num % 10 == 1) {
                    count++;
                }
            } else if (num >= 1000 && num <= 9999) {
                for (long long k = 1; k < n - 2; k++) {
                    int num2 = j * 100 + k;
                    if (num2 % 10 == 1 || num2 / 10 == 1) {
                        count++;
                    }
                }
            } else if (num >= 100000 && num <= 999999) {
                for (long long k = 1; k < n - 3; k++) {
                    int num2 = j * 10000 + k;
                    if (num2 % 10 == 1 || num2 / 10 == 1) {
                        count++;
                    }
                }
            } else {
                for (long long k = 1; k < n - 4; k++) {
                    int num2 = j * 1000000 + k;
                    if (num2 % 10 == 1 || num2 / 10 == 1) {
                        count++;
                    }
                }
            }
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "The number of n-digit numbers that start or end with 1 is: " << starts_one_ends(n) << endl;
    return 0;
}