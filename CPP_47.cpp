#include <algorithm>
#include <vector>

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

double median(std::vector<int> numbers) {
    if (numbers.empty()) {
        throw std::runtime_error("Vector is empty");
    }
    std::sort(numbers.begin(), numbers.end());
    int size = numbers.size();
    if (size % 2 == 1)
        return static_cast<double>(numbers.at(size / 2));
    else
        return static_cast<double>(numbers.at(size / 2 - 1) + numbers.at(size / 2)) / 2.0;
}