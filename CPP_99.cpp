#include <cmath>
int closest_integer(const std::string& value) {
    double number = stod(value);
    int rounded = static_cast<int>(round(number));
    
    if (std::abs(number - rounded) == 0.5) {
        return static_cast<int>(ceil(number));
    } else {
        return rounded;
    }
}