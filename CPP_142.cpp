#include <vector>
#include <iostream>

int sum_squares(std::vector<int> lst) {
    int total = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 3 == 0 && i % 4 != 0) {
            total += lst[i] * lst[i];
        } else if (i % 4 == 0 && i % 3 != 0) {
            total += lst[i] * lst[i] * lst[i];
        }
    }
    return total;
}

int main() {
    std::vector<int> numbers = {-1, -3, 17, -1, -15, 13, -1, 14, -14, -12, -5,
                                 14, -14, 6, 13, 11, 16, 16, 4, 10};
    int sum = sum_squares(numbers);
    std::cout << "The sum of squares is: " << sum << std::endl;
    return 0;
}