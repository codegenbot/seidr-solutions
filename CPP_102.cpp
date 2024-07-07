```cpp
#include <iostream>
#include <string>

int choose_num(int, int);

int main() {
    int num1, num2;
    std::cout << "Enter two numbers (separated by a space): ";
    std::cin >> num1 >> num2;  
    int result = choose_num(num1, num2);
    std::cout << "Result: " << std::to_string(result) << std::endl;
    return 0;
}

int choose_num(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}