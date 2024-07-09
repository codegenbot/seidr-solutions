```
#include <iostream>

using namespace std;

int choose_num(int x, int y) {
    if (x % 2 == 0 && x <= y) {
        return x;
    } else if (y % 2 == 0 && x <= y) {
        return y;
    } else {
        return -1;
    }
}

int main() {
    int x, y;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    cout << "The biggest even integer in the range is: " << choose_num(x, y) << endl;
    return 0;
}