#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int x_or_y(int n, int x, int y) {
    if (isPrime(n))
        return x;
    else
        return y;
}

int main() {
    int num,x,y;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    cout << "The output is: " << x_or_y(num, x, y) << endl;
    return 0;
}