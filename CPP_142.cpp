```cpp
#include <vector>
#include <cmath>
#include <iostream>

int sum_squares(std::initializer_list<int> lst) {
    int total = 0;
    for (int i = 0; i < std::vector<int>(lst).size(); i++) {
        if ((i + 1) % 3 == 0 && (i + 1) % 4 != 0)
            total += pow(std::vector<int>(lst)[i], 2);
        else if ((i + 1) % 4 == 0 && (i + 1) % 3 != 0)
            total += pow(std::vector<int>(lst)[i], 3);
    }
    return total;

int main() {
    int result = sum_squares({1, 2, 3, 4, 5}); 
    std::cout << "The sum of squares is: " << result << std::endl;
    return 0;