```
#include <iostream>
#include <string>

using namespace std;

string solve(int N) {
    string binary = "";
    while (N > 0) {
        int digit = N % 2;
        binary += to_string(digit);
        N /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}
```