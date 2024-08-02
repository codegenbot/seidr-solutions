#include <iostream>
#include <cmath>

int closest_integer(std::string value){
    double num = stod(value);
    int rounded = round(num);
    if (num - rounded == 0.5 || num - rounded == -0.5) {
        return (num > 0) ? ceil(num) : floor(num);
    }
    return rounded;
}

int main() {
    // Add test cases for the function
}