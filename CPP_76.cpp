```cpp
#include <iostream>
#include <string>

bool isSimplePower(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        int temp = i;
        while (temp <= num) {
            if (temp == num)
                return true;
            temp *= i;
        }
    }
    return false;
}

int simplePowerCheckerMain() {
    std::string input;
    std::cout << "Enter a number: ";
    std::cin >> input;
    int num = std::stoi(input);
    if (isSimplePower(num)) {
        std::cout << input << " is a simple power.\n";
    } else {
        std::cout << input << " is not a simple power.\n";
    }
    return 0;
}