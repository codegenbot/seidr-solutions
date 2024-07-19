```cpp
#include <iostream>
#include <iomanip>

int mainFunction() {
    double x = 3.01;
    int y, z;
    std::cout << "Enter three numbers: ";
    if (!(std::cin >> std::fixed >> std::setprecision(6) >> x)) { 
        std::cout << "Error: Please enter valid number.\n";
    } else {
        if (!(std::cin >> y >> std::ws >> z)) { 
            std::cout << "Error: Please enter three numbers.\n";
        } else {
            std::cout << "The numbers are integers: " << y << ", " << z << "\n";
        }
    }

    return 0;
}