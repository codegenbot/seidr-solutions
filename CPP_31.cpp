#include <iostream>
using namespace std;

bool is_prime(int n); // Declare the is_prime function

int main() {
    int n;
    cin >> n;
    if (!is_prime(n)) {
        cout << "The number is not prime." << endl;
    } else {
        cout << "The number is prime." << endl;
    }
    return 0;
}