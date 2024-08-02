Here is the solution:

#include <vector>

int firstNegativeIndex(const std::vector<int>& numbers) {
    int sum = 0;
    int index = -1;

    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
        if (sum < 0) {
            index = i;
            break;
        }
    }

    return index;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }
    int result = firstNegativeIndex(numbers);
    std::cout << result << std::endl;
    return 0;
}