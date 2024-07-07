```cpp
#include <iostream>
#include <string>

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
    int num1, num2;
    std::cout << "Enter two numbers (separated by a space): ";
    std::cin >> num1 >> num2;  
    int result = choose_num(num1, num2);
    std::string strResult = std::to_string(result);
    std::cout << "Result: " << strResult << std::endl;
    return 0;
}