```cpp
#include <iostream>
using namespace std;

int choose_num(int x, int y) {
    int result = 0;
    for (int i = x; i <= y; i++) {
        if (i % 2 == 0)
            result = i;
    }
    return result;
}

int main() {
    int x, y;
    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of y: ";
    cin >> y;
    cout << "The biggest even integer is: " << choose_num(x,y) << endl;
}