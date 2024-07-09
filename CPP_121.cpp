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
    std::vector<int> input;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        input.push_back(num);
    }

    int result = solution(input);

    if (!input.empty()) {
        std::cout << "Sum of the elements that are at an even index and are odd: " << result << std::endl;
    } else {
        std::cout << "The vector is empty." << std::endl;
    }
    return 0;
}