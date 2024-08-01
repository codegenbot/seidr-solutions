#include <iostream>
#include <vector>

int solution(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (i % 2 == 0 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    assert(solution({3, 13, 2, 9}) == 3);
    std::vector<int> numbers = {1, 2, 3, 4};
    int result = solution(numbers);
    std::cout << "The sum of the odd-indexed elements that are not divisible by 2 is: " << result;
    return 0;
}