#include <iostream>
#include <iomanip>
#include <limits>

int mainFunction() {
    double x = 3.01;
    int y, z;
    std::cout << "Enter three numbers: ";
    if (!(std::cin >> std::fixed >> std::setprecision(6) >> x >> std::ws >> y >> std::ws >> z)) { 
        std::cout << "Error: Please enter valid integer values.\n";
    } else {
        std::cout << "The numbers are integers: " << y << ", " << z << "\n";
    }

    return 0;
}