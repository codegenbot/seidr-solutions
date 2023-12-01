#include <cmath>

float truncate_number(float number){
    int integerPart = (int) number;
    float decimalPart = number - integerPart;
    return decimalPart;
}

int main() {
    assert (std::abs(truncate_number(123.456) - 0.456) < 1e-4);
    
    return 0;
}