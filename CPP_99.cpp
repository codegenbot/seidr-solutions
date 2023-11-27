#include <string>
#include <cmath>

int closest_integer(std::string value){
    double num = std::stod(value);
    int floor_num = std::floor(num);
    int ceil_num = std::ceil(num);
    
    if (num - floor_num < ceil_num - num) {
        return floor_num;
    } else if (num - floor_num > ceil_num - num) {
        return ceil_num;
    } else {
        if (num >= 0) {
            return ceil_num;
        } else {
            return floor_num;
        }
    }
}

int main() {
    assert(closest_integer("0") == 0);
    
    return 0;
}