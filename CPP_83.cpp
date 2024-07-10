#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i == 9) {
            count += pow(10, n - 1);
        } else {
            count += pow(10, n - 1) * (i != 1);
        }
    }
    for (int i = 10; i <= 10 * 9; i++) {
        if (i % 10 == 1 || i / 10 == 1) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "The number of n-digit positive integers that start or end with 1 is: " << starts_one_ends(n) << endl;
    return 0;
}