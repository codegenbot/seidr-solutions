#include <iostream>
#include <limits>
#include <boost/numeric/conversion/cast.hpp>

bool isGreaterThanOrEqualTo(double d1) {
    return d1 >= 0.0;
}

int main() {
    double num = 0.0;
    std::cout << "Enter a number: ";
    while (!(std::cin >> num)) {
        std::cerr << "Invalid input. Please enter a numeric value." << std::endl;
        std::cout << "Enter a number: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    
    if(isGreaterThanOrEqualTo(boost::numeric_cast<double>(num))) 
        std::cout << num << " is greater than or equal to 0" << std::endl;
    else
        std::cout << "0 is greater than " << num << std::endl;
    
    return 0;
}