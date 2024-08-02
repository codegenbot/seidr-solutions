#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        for (long long j = 1; j < (n - 1); j++) {
            int num = i * 10 + j;
            if (num >= 10 && num <= 1000000) {
                if (num % 10 == 1 || num / pow(10, n-1) % 10 == 1) {
                    count++;
                }
            } else {
                break;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The count of the numbers of " << n << "-digit positive integers that start or end with 1 is: " << starts_one_ends(n) << endl;
    return 0;
}