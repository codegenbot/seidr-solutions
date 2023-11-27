#include<iostream>
using namespace std;

int x_or_y(int n, int x, int y) {
    // Check if n is a prime number
    bool isPrime = true;
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    
    // Return x if n is prime, otherwise return y
    if (isPrime) {
        return x;
    } else {
        return y;
    }
}

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    cout << x_or_y(n, x, y) << endl;
    return 0;
}