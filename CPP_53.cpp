#include <cstdlib>

int add(int x, int y) {
    return x + y;
}

int main() {
    srand(time(0));
    int x = rand() % 10;
    int y = rand() % 10;
    cout << "The random numbers are: " << x << ", " << y << endl;
    cout << "Their sum is: " << add(x, y) << endl;
}