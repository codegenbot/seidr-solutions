```cpp
#include <iostream>
#include <cctype>

int choose_num(int x, int y) {
    if (x % 2 == 0 && y % 2 == 0) {
        return (x > y) ? x : y;
    } else if (x % 2 == 0) {
        return x;
    } else if (y % 2 == 0) {
        return y;
    }
    return -1;
}

int main() {
    int x, y;
    std::cout << "Enter two numbers (separated by a space): ";
    std::cin >> x >> y;
    int result = choose_num(x, y);
    std::cout << "Result: " << result << std::endl;
    return 0;
}