#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9LL; i++) {
        if (i % 10 == 1 || i / 10 == 1) {
            count++;
        }
        if (i < 10 && i == 1) {
            count++;
        }
        for (long long j = i + 1; j <= pow(10, n - 1); j++) {
            if (j % 10 == 1 || j / 10 == 1) {
                count++;
            }
            if (j < 10 && j == 1) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "The count of the numbers of " << n << "-digit positive integers that start or end with 1 is: " << starts_one_ends(n) << endl;
    return 0;
}