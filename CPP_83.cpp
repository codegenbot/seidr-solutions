#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9; i++) {
        if (i % 10 == 1 || i == 1) {
            count++;
        }
        for (long long j = 1; j < pow(10, n - 1); j++) {
            long long num = i * pow(10, n - 1) + j;
            if (num % 10 == 1 || num == 1) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Count of numbers that start or end with 1 is: " << starts_one_ends(n);
    return 0;
}