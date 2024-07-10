#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if ((i == 1 || i % 10 == 1) && (n - 1 >= 0)) {
            count++;
        }
        for (int j = 1; j < i; j++) {
            if ((j % 10 != 1) && (n - 1 >= 0)) {
                break;
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