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
    
    if (n <= 1) {
        cout << x << endl;
    } else if (isPrime(n)) {
        cout << x << endl;
    } else {
        cout << y << endl;
    }
    
    return 0;
}