#include <string>
#include <cassert>
#include <cmath>

using namespace std;

int closest_integer(string value){
    double num = stod(value);
    int rounded = round(num);
    if (num - rounded == 0.5) {
        if (num > 0) {
            return ceil(num);
        } else {
            return floor(num);
        }
    } else {
        return rounded;
    }
}

int main() {
    assert(closest_integer("0.0") == 0);
    return 0;
}