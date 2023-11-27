#include <cstdlib>

int add(int x, int y) {
    return x + y;
}

int main() {
    int x = rand() % 1000;
    int y;
    cin >> y;
    cout << add(x, y) << endl;
    return 0;
}