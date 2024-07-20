#include <iostream>
#include <cmath>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        if ((long long)i != i) { // check for overflow
            for (int j = 0; j < n - 1; j++) {
                int num = i * pow(10, j);
                if ((num % 10) == 1) {
                    count++;
                }
            }
        } else {
            for (long long num = i; num <= (long long)pow(10, n) - 1; num /= 10) { // check for overflow
                int digit = static_cast<int>(num % 10);
                if (digit == 1 || digit == 9) {
                    count++;
                }
                if ((long long)num / 10 != num) break;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The number of n-digit positive integers that start or end with 1 is: " << starts_one_ends(n) << endl;
    return 0;
}