#include <string>
#include <cmath>

int closest_integer(std::string value){
    double num = std::stod(value);
    int rounded = std::round(num);
    int floor_num = std::floor(num);
    int ceil_num = std::ceil(num);
    
    if (rounded == floor_num || rounded == ceil_num) {
        return rounded;
    } else if (num - floor_num < ceil_num - num) {
        return floor_num;
    } else {
        return ceil_num;
    }
}

int main() {
    assert(closest_integer("0") == 0);
    // Add more test cases here
    
    return 0;
}