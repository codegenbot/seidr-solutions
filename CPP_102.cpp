#include <cassert>
#include <iostream>
using namespace std;

int choose_num(int x, int y) {
    if (x > y) return -1;
    if (y % 2 == 0) return y;
    if ((y - 1) >= x) return y - 1;
    return -1;
}

int main() {
    int x, y;
    cout << "Enter two integers (x and y): ";
    cin >> x >> y;
    int result = choose_num(x, y);
    cout << "Result: " << result << endl;

    // Test case
    assert(choose_num(546, 546) == 546);
    return 0;
}