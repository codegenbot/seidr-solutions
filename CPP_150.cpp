#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}

int x_or_y() {
    int n, x, y;
    cout << "Enter a number: ";
    cin >> n;

    // Prompt for x and y
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    if (isPrime(n))
        return x;
    else
        return y;
}

int main() {
    int result = x_or_y();
    cout << "Result: " << result << endl;
    return 0;
}