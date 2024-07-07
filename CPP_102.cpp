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
    std::string snum1 = std::to_string(num1), snum2 = std::to_string(num2);
    int result = choose_num(stoi(snum1), stoi(snum2));
    std::cout << "Result: " << result << std::endl;
    return 0;
}