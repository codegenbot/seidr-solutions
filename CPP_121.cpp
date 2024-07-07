#include <iostream>
#include <vector>

int solution(std::vector<int> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if ((i % 2 == 0 && lst[i] % 2 != 0)) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    assert(solution({3, 13, 2, 9}) == 3);
    std::vector<int> input;
    int num;
    std::cout << "Enter the numbers (enter -1 to finish):" << std::endl;
    while (true) {
        std::cin >> num;
        if (num == -1)
            break;
        input.push_back(num);
    }
    std::cout << "The sum is: " << solution(input) << std::endl;
    return 0;
}