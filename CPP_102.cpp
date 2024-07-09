#include <iostream>

using namespace std;

int choose_num(int x, int y) {
    for (int i = x; i <= y; i++) {
        if (i % 2 == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int x, y;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    cout << "The biggest even number in the range [" << x << ", " << y << "] is " << choose_num(x, y) << endl;
    return 0;
}