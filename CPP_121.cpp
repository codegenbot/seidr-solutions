#include <iostream>
#include <vector>

int solutions(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> numbers = {12, 45, 3, 67};
    int result = solutions(numbers);
    std::cout << "The sum of odd numbers is: " << result << std::endl;
    return 0;
}