```cpp
#include <cstdlib>
int add(int x, int y) {
    return x + y;
}

int main() {
    srand(time(0));
    int num1 = rand() % 100;
    int num2 = rand() % 100;
    std::cout << "Random numbers: " << num1 << " and " << num2 << ".\n";
    std::cout << "Sum of the random numbers is: " << add(num1, num2) << ".\n";
    return 0;
}