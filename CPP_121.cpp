#include <vector>
#include <cassert>
#include <iostream>

int solution(std::vector<int> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 2 == 0 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> lst;
    int input;
    std::cout << "Enter numbers (end input with any non-integer value): " << std::endl;
    while (std::cin >> input) {
        lst.push_back(input);
    }
    std::cout << "Sum of odd numbers at even indices: " << solution(lst) << std::endl;
    return 0;
}