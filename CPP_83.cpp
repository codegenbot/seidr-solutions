#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if ((i == 1 || i % 10 == 1) && (n > 1)) {
            count++;
        }
        if (i < 10) continue;
        for (int j = 1; j <= 9; j++) {
            int num = i * pow(10, n - 1) + j;
            if ((j == 1 || j % 10 == 1) && (n > 1)) {
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
    cout << "The number of n-digit positive integers that start or end with 1 is: " << starts_one_ends(n) << endl;
    return 0;
}