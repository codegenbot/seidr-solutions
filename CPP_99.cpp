#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int closest_integer(string value);

int main() {
    string input;
    cin >> input;
    cout << closest_integer(input);
    return 0;
}

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