#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if ((i == 1 || i % 10 == 1) && isOne(n - 1, i)) {
            count++;
        }
    }
    return count;
}

bool isOne(int n, int num) {
    int count = 0;
    while (n > 0) {
        if (num % 10 == 1) {
            count++;
        }
        num /= 10;
        n--;
    }
    return count >= 1 || count + (n > 0) >= 1;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "The count of numbers that start or end with 1 is: " << starts_one_ends(n) << endl;
    return 0;
}