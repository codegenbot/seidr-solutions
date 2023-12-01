#include <string>

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
    string input;
    cin >> input;
    int closest = closest_integer(input);
    cout << closest << endl;
    return 0;
}