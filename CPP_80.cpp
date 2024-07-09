#include <iostream>
using namespace std;

bool is_happy(int n) {
    if (n < 1) return false;
    while (n > 1) {
        int sum = 0;
        while (n) {
            n %= 10;
            sum += n * n;
            n /= 10;
        }
        n = sum;
    }
    return n == 1;
}

int main(int argc, char const *argv[]) {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (is_happy(num)) {
        cout << num << " is a happy number.\n";
    } else {
        cout << num << " is not a happy number.\n";
    }
    return 0;
}