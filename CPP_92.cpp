```cpp
#include <iostream>
#include <iomanip>

int mainFunction() {
    double x = 3.01;
    int y, z;
    std::cout << "Enter three numbers: ";
    if (!(std::cin >> x >> std::ws >> y >> std::ws >> z)) { 
        std::cout << "Error: Please enter valid integer values.\n";
    } else {
        std::cout << "The numbers are integers: " << y << ", " << z << "\n";
    }

    return 0;
}