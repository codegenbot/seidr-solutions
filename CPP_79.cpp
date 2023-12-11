```
#include <iostream>
#include <string>

std::string decimal_to_binary(int decimal) {
    if (decimal == 0) {
        return "db0db";
    }
    std::string binary = "";
    bool isNegative = false;
    if (decimal < 0) {
        isNegative = true;
        decimal *= -1;
    }
    while (decimal > 0) {
        binary += (decimal % 2 == 0 ? "0" : "1");
        decimal /= 2;
    }
    if (isNegative) {
        return "db-" + binary + "db";
    } else {
        return "db" + binary + "db";
    }
}
```