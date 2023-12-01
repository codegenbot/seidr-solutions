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
    int result = closest_integer(input);
    cout << result << endl;
    return 0;
}