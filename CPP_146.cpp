#include <iostream>
#include <vector>

int main() {
    int count = 0;
    int num;
    std::cout << "Enter numbers (enter -1 to stop):" << std::endl;
    while ((std::cin >> num) && (num != -1)) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    std::cout << "Count: " << count << std::endl;
    return 0;
}