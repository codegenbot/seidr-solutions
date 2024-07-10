```cpp
#include <cstdlib>
int add(int x, int y) {
    return x + y;
}

int main() {
    srand(time(0));
    int num = rand();
    std::cout << "Random number: " << num << std::endl;
    return 0;
}