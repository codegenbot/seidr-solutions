
#include <iostream>
#include <iomanip>

int add(int x, int y) {
    return x + y;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << add(x, y) << endl;
    return 0;
}