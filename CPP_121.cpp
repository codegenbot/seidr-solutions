#include <iostream>
#include <vector>

int solution(const std::vector<int>& vec) {
    int sum = 0;
    for (int i : vec) {
        sum += i * i;
    }
    return sum;
}

int main() {
    int sum = solution({3, 13, 2, 9});
    std::cout << "Result: " << sum << std::endl;
    return 0;
}