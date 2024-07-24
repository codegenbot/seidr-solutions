#include <iostream>

using namespace std;

int choose_num(int x, int y) {
    if (x > y) {
        swap(x, y);
    }
    for (; x <= y; ++x) {
        if (x % 2 == 0) {
            return x;
        }
    }
    return -1;
}

int main() {
    int x, y;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    cout << "The biggest even number is: " << choose_num(x, y) << endl;
    return 0;
}