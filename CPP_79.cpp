```
#include <iostream>
#include <string>
#include <algorithm>

std::string decimal_to_binary(int decimal) {
    std::string binary = "";
    while (decimal > 0) {
        binary += (decimal % 2 == 0 ? "0" : "1");
        decimal /= 2;
    }
    return "db" + std::reverse(binary.begin(), binary.end()) + "db";
}
```