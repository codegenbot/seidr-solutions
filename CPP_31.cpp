#include <iostream>
#include <sstream>

using namespace std;

bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n, count = 1;
    cin >> n;
    cout << "The number is ";
    if (!is_prime(n)) {
        cout << "not prime." << endl;
    } else {
        for (int i = 2; ; i++) {
            if (!is_prime(i))
                break;
            cout << i << " ";
            count++;
            if (i == n)
                break;
        }
        cout << "It's the " << count << " prime number." << endl;
    }
    return 0;
}