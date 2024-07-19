#include <iostream>
#include <string>

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
    string input;
    getline(cin, input);
    int n = stoi(input); 
    if (!is_prime(n)) {
        cout << "The number is not prime." << endl;
    } else {
        cout << "The number is prime." << endl;
    }
    return 0;
}