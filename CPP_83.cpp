#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if ((i == 1 || i % 10 == 1) && (n > 2)) {
            count += 1;
        }
    }
    return count;
}

cout << "Enter a positive integer: ";
cin >> n;
cout << "Count of numbers that start or end with 1: " << starts_one_ends(n) << endl;