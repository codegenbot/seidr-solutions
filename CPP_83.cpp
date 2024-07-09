#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        if (n > 1) {
            for (long long j = 1; j < (long long) pow(10, n - 1); j++) {
                long long num = i * (long long) pow(10, n - 1) + j;
                if ((num / (long long) pow(10, n - 1)) % 10 == 1 || num % 10 == 1) {
                    count++;
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
    cout << "The count of the numbers is: " << starts_one_ends(n) << endl;
    return 0;
}