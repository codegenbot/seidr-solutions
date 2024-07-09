#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    
    // Count of numbers that start with 1
    for (int i = 1; i <= 9; i++) {
        if (n == 1) {
            count += 10;
            break;
        }
        count += pow(10, n - 1);
    }

    // Count of numbers that end with 1
    for (int i = 1; i <= 9; i++) {
        if (i == 1 && n > 1) {
            continue;
        }
        count += pow(10, n - 1) * i;
    }

    return count;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "The count of numbers that start or end with 1 is: " << starts_one_ends(n);
    return 0;
}