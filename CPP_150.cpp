#include <cmath>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    
    cout << x_or_y(n, x, y);
    return 0;
}