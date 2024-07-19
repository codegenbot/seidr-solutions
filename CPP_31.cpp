```
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
    int n;
    cin >> n;
    if (!is_prime(n)) {
        cout << "The number is not prime." << endl;
    } else {
        ostringstream oss; 
        oss << "The number is prime. It's the " << (n > 1 ? "first" : "") << " prime number.";
        string output = oss.str(); 
        cout << output << endl;
    }
    return 0;
}