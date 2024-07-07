```cpp
#include <iostream>
#include <cctype>
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
    std::string input;
    std::cin >> input;
    int x = std::stoi(input.substr(0, input.find(' ')));
    int y = std::stoi(input.substr(input.find(' ') + 1));
    int result = choose_num(x, y);
    std::cout << "Result: " << result << std::endl;
    return 0;
}