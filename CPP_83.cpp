#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9; i++) {
        if (i == 1 || i == 10 || i % 10 == 1) {
            count++;
        }
        for (long long j = 1; j < i; j++) {
            if (j % 10 != 0 && j / 10 != 1) {
                break;
            }
            if (j == i - 1 || j % 10 == 1) {
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