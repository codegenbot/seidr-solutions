#include <cstdlib>

int main() {
    int x = rand() % 1000;
    int y = rand() % 1000;
    int sum = add(x, y);
    std::cout << "The sum of " << x << " and " << y << " is " << sum << std::endl;
    return 0;
}