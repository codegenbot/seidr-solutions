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
    cin >> x >> y;
    cout << choose_num(x, y) << endl;
    return 0;
}