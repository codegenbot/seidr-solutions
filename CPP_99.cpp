#include <iostream>
#include <cmath>

using namespace std;

int closest_integer(string value){
    double num = stod(value);
    int rounded = round(num);
    int floorVal = floor(num);
    int ceilVal = ceil(num);
    
    if (rounded - num < num - rounded) {
        return rounded;
    } else if (num - floorVal < ceilVal - num) {
        return floorVal;
    } else {
        return ceilVal;
    }
}

int main() {
    string value;
    cin >> value;
    cout << closest_integer(value) << endl;
    return 0;
}