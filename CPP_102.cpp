#include <iostream>

using namespace std;

int choose_num(int x, int y) {
    if (x % 2 == 0 && y % 2 == 0) {
        return max(x, y);
    } else if (x % 2 == 0) {
        return x;
    } else if (y % 2 == 0) {
        return y;
    }
    return -1;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "The biggest even number is: " << choose_num(x, y) << endl;
    return 0;
}