```cpp
#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > 1e-9) return false;
    }
    return true;
}

std::vector<float> sort_even(const std::vector<float>& numbers) {
    std::vector<float> even_numbers;
    for (float num : numbers) {
        if (num % 2.0 == 0.0f) {
            even_numbers.push_back(num);
        }
    }
    std::sort(even_numbers.begin(), even_numbers.end());
    return even_numbers;
}

int main() {
    int n;
    std::vector<float> numbers;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        float num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        numbers.push_back(num);
    }
    std::vector<float> even_numbers = sort_even(numbers);
    if (issame(even_numbers, {2.0f,4.0f,8.0f,12.0f})) {
        std::cout << "The sorted even numbers are: ";
        for (float num : even_numbers) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "The expected output is not achieved." << std::endl;
    }
    return 0;
}