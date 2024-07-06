#include <iostream>

using namespace std;

int choose_num(int x, int y) {
    if (x % 2 == 0 && y >= x) {
        return y;
    } else if (y % 2 == 0 && x <= y) {
        return y;
    }
    return -1;
}

int main() {
    int x, y;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;

    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }

    int result = choose_num(x, y);
    cout << "The biggest even integer is: " << result << endl;

    return 0;
}