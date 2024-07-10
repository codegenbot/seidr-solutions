#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

std::vector<int> sort_even(const std::vector<int>& numbers) {
    std::vector<int> even_numbers;
    for (int num : numbers) {
        if (num % 2 == 0) {
            even_numbers.push_back(num);
        }
    }
    std::sort(even_numbers.begin(), even_numbers.end());
    return even_numbers;
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
    std::vector<int> even_numbers = sort_even(numbers);
    if (issame(even_numbers, {2,4,8,12})) {
        std::cout << "The sorted even numbers are: ";
        for (int num : even_numbers) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "The expected output is not achieved." << std::endl;
    }
    return 0;
}