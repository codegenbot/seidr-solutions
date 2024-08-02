Here is the completed code:

```cpp
#include <string>
#include <algorithm>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int hex_key(string num) {
    int count = 0;
    for (char c : num) {
        if (c >= 'A' && c <= 'F') c -= ('A' - '9');
        else if (c < '0' || c > '9') continue;

        int decimal = c - '0';
        if (decimal == 2 || decimal == 3 || decimal == 5 || decimal == 7 || decimal == 11 || decimal == 13) count++;
    }
    return count;
}