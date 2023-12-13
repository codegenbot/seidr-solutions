```
#include <iostream>
#include <string>
#include <cmath>

int closest_integer(std::string value){
    double num = std::stod(value);
    int floor_num = std::floor(num);
    int ceil_num = std::ceil(num);
    if (num - floor_num < ceil_num - num) {
        return floor_num;
    } else {
        return ceil_num;
    }
}

int main() {
    std::cout << closest_integer("0") << std::endl;
    std::cout << closest_integer("1.4") << std::endl;
    std::cout << closest_integer("2.6") << std::endl;
    std::cout << closest_integer("-4.5") << std::endl;
    std::cout << closest_integer("10.1") << std::endl;
    std::cout << closest_integer("-10.9") << std::endl;

    return 0;
}
```