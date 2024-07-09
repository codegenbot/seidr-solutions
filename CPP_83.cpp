#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j < n - 1; j++) {
            if ((i == 1 && (n % 10 != 1 || i * pow(10, j) + 1 > pow(10, n - 1))) ||
                (n % 10 == 1)) {
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
    cout << "Count of numbers that start or end with 1: " << starts_one_ends(n) << endl;
    return 0;
}