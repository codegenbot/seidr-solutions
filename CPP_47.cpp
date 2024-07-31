```c++
#include <vector>
#include <algorithm>

double median(std::vector<int> numbers) {
    std::sort(numbers.begin(), numbers.end());
    int n = numbers.size();
    if (n % 2 == 0)
        return (numbers[n/2 - 1] + numbers[n/2]) / 2.0;
    else
        return numbers[n/2];
}

int main() {
    std::vector<int> numbers;
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }

    double result = median(numbers);

    std::cout << "The median of the given array is: " << result << std::endl;

    return 0;
}