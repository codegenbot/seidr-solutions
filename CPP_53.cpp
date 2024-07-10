```cpp
#include <cstdlib>
int add(int x, int y) {
    return x + y;
}

int main() {
    srand(time(0));
    int num1 = rand() % 100;
    int num2 = rand() % 100;
    cout << "Random numbers: " << num1 << " and " << num2 << endl;
    cout << "Sum of random numbers: " << add(num1, num2) << endl;
    return 0;
}