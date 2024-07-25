#include <iostream>
#include <cmath>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if ((i == 1 || i % 10 == 1) && (n - 1 >= 0)) {
            count += 1;
        }
        for (int j = 1; j < n; j++) {
            int num = i * pow(10, j - 1) + j % 10;
            if ((j % 10 == 1 || j / 10 == 1) && (n - j - 1 >= 0)) {
                count += 1;
            }
        }
    }
    return count;
}

int main2() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "The number of n-digit positive integers that start or end with 1 is: " << starts_one_ends(n) << endl;
    return 0;
}