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
    std::string str;
    std::cout << "Enter two numbers (separated by a space): ";
    std::getline(std::cin, str);
    int x = std::stoi(str.substr(0, str.find(' ')));
    int y = std::stoi(str.substr(str.find(' ') + 1));
    int result = choose_num(x, y);
    std::cout << "Result: " << result << std::endl;
    return 0;
}