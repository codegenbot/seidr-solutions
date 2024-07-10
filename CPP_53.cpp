```cpp
#include <cstdlib>
int add(int x, int y) {
    return x + y;
}

int main() {
    srand(time(0));
    int num = rand() % 100;
    cout << "Random number: " << num << endl;
    return 0;
}