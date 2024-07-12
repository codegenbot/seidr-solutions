#include <iostream>
#include <vector>

int main() {
    int count = specialFilter({11, 12, 13, 14, 15, 21, 22, 23, 24, 25});
    std::cout << "The number of numbers in the input vector that meet the condition is: " << count << std::endl;
    return 0;
}