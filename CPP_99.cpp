#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int closest_integer(string value){
    double num = stod(value);
    int floor_num = floor(num);
    int ceil_num = ceil(num);
    if (num - floor_num < ceil_num - num) {
        return floor_num;
    } else {
        return ceil_num;
    }
}

int main() {
    string value;
    cin >> value;
    cout << closest_integer(value) << endl;
    return 0;
}