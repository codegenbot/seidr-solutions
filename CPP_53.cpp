```cpp
#include <cstdlib>
int add(int x, int y) {
    return x + y;
}

int main() {
    #include <ctime>
    srand(time(0));
    int num1 = rand() % 100;
    int num2 = rand() % 100;
    std::cout << "Random numbers: " << num1 << " and " << num2 << ".\n";
    std::cout << "Sum of the numbers: " << add(num1, num2) << ".\n";
    return 0;
}