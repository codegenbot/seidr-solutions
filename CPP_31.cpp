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
    int n_str = n;
    stringstream sstream;
    sstream << n_str;
    string str = sstream.str();
    cout << "The number is " << str;
    if (!is_prime(stoi(str))) {
        cout << " not prime." << endl;
    } else {
        cout << " prime." << endl;
    }
    return 0;
}