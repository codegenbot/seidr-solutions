```
#include <iostream>
#include <cmath>

int iscuber(int a) {
    double cbrt = std::cbrt(static_cast<double>(a));
    return (std::abs(cbrt - static_cast<int>(cbrt)) < 1e-6);
}

// Remove one of the main function definitions
// int main() {
//     // Code here
// }
```