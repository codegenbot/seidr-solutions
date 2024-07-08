#include <iostream>
using namespace std;

int choose_num(int x, int y) {
    for (int i = x; i <= y; i++) {
        if (i % 2 == 0)
            return i;
    }
    return -1;
}

void anotherMain() {
    int x, y;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    cout << "The biggest even integer in the range is " << choose_num(x, y) << endl;
}

int main() {
    anotherMain();
    return 0;
}