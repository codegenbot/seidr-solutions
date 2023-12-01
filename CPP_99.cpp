#include <string>
using namespace std;

int closest_integer(string value){
    double num = stod(value);
    int floor_num = floor(num);
    int ceil_num = ceil(num);
    if (fabs(num - floor_num) < fabs(num - ceil_num)) {
        return floor_num;
    } else {
        return ceil_num;
    }
}

int main() {
    assert(closest_integer("0") == 0);
    return 0;
}