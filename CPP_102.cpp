```cpp
#include <iostream>
using namespace std;

int choose_num(int x, int y) {
    if (x > y) {
        swap(x, y);
    }
    for (int i = x; i <= y; i++) {
        if (i % 2 == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int x, y;
    cout << "Enter two positive numbers: ";
    cin >> x >> y;
    cout << "The biggest even number is: " << choose_num(x, y) << endl;
    return 0;