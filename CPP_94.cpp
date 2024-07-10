#include <iostream>
#include <vector>

int sumVector(const std::vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        sum += num;
    }
    return sum;
}

int main() {
    std::vector<int> lst({127, 97, 8192});
    int result = sumVector(lst);
    std::cout << "The sum is: " << result << std::endl;
    return 0;
}