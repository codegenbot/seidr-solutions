#include <iostream>
using namespace std;

bool is_prime(long long n) {
    if (n <= 1) return false;
    if (n == 2) return true; 
    if (n % 2 == 0) return false; 
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;

}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    string strNum = to_string(num); 
    if (is_prime(stoll(strNum))) { 
        cout << strNum << " is a prime number.\n";
    } else {
        cout << strNum << " is not a prime number.\n";
    }
    return 0;
}