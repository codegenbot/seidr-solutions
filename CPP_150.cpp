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
    int n, x, y;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    
    int result = x_or_y(n, x, y);
    
    cout << "The output is: " << result << endl;
    
    return 0;
}