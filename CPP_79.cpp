```
#include <iostream>
#include <string>

std::string decimal_to_binary(int decimal) {
    if (decimal == 0) {
        return "db0db";
    }
    std::string binary = "";
    while (decimal > 0) {
        binary += (decimal % 2 == 0 ? "0" : "1");
        decimal /= 2;
    }
    return "db" + binary + "db";
}
```