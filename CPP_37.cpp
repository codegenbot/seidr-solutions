#include <vector>
#include <algorithm>
#include <initializer_list>

bool isSame(const std::vector<int>& v1, const std::vector<int>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

std::vector<int> sortEven(const std::vector<int>& numbers) {
    std::vector<int> evenNumbers;
    for (int num : numbers) {
        if (num % 2 == 0) {
            evenNumbers.push_back(num);
        }
    }
    std::sort(evenNumbers.begin(), evenNumbers.end());
    return evenNumbers;
}

int main() {
    int n;
    std::vector<int> numbers;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        numbers.push_back(num);
    }
    std::vector<int> evenNumbers = sortEven(numbers);
    if (isSame(evenNumbers, {2,4,8,12})) {
        std::cout << "The sorted even numbers are: ";
        for (int num : evenNumbers) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "The expected output is not achieved." << std::endl;
    }
    return 0;
}