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
    std::vector<int> lst = {1, 3, 4, 5, 7};
    int result = solutions(lst);
    std::cout << "Sum of odd numbers is: " << result << std::endl;
    return 0;
}