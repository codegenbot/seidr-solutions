```
#include <iostream>
#include <string>

std::string decimal_to_binary(std::string decimal) {
    std::string binary = "";
    while (decimal > 0) {
        binary += (decimal % 2 == 0 ? "0" : "1");
        decimal /= 2;
    }
    return "db" + binary + "db";
}
```