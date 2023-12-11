```cpp
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int isPrime(int n) {
    if (n <= 1 || n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int hex_key(string num) {
    int count = 0;
    for (int i = 0; i < num.length(); i++) {
        char c = num[i];
        if (isPrime(c - '0')) count++;
    }
    return count;
}

int main() {
    string num;
    cin >> num;
    cout << hex_key(num) << endl;
    return 0;
}
```