```
#include <iostream>
#include <string>
using namespace std;

long long special_factorial(int n) {
    if (n <= 0) {
        return 1;
    } else {
        int num = stoi(n, 0, n.length());
        return num * special_factorial(num - 1);
    }
}
```