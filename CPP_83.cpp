#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i == n) {
            count++;
        }
        for (int j = 1; j < i || j > n; j++) {
            // Do nothing
        }
        count += (n - 1);
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Count of the numbers that start or end with 1 is: " << starts_one_ends(n) << endl;
    return 0;
}