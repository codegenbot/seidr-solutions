```cpp
#include <iostream>
#include <string>
#include <cassert>
#include <cmath>

std::string rounded_avg(int n, int m);

int main() {
    assert (rounded_avg(5, 5) == "101");
    // Add more test cases here
    return 0;
}

std::string rounded_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }

    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }

    int avg = round(sum / (m - n + 1));

    std::string binary = "";
    while (avg > 0) {
        binary = std::to_string(avg % 2) + binary;
        avg /= 2;
    }

    return binary;
}
```