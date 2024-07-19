```cpp
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
    std::stringstream ss;
    ss << "The number is ";
    if (!is_prime(n)) {
        ss << "not prime.";
    } else {
        ss << "prime.";
    }
    cout << ss.str() << endl; 
}