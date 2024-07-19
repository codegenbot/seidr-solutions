#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i == n) {
            count++;
        }
        for (int j = (j < i ? 1 : i); j <= (j > n ? n : i - 1); j++) {
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
    if(n < 0)
        cout << "Invalid input. Please enter a non-negative integer." << endl;
    else
        cout << "Count of the numbers that start or end with 1 is: " << starts_one_ends(n) << endl;
    return 0;
}