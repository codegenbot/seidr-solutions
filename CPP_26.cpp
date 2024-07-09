```cpp
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> remove_duplicates(const std::vector<int>& numbers) {
    std::set<int> s (numbers.begin(), numbers.end());
    std::vector<int> result(s.begin(), s.end());
    return result;

}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> numbers[i];
    }
    
    std::vector<int> unique_numbers = remove_duplicates(numbers);
    
    if (!issame(numbers, unique_numbers)) {
        std::cout << "Unique numbers: ";
        for (int num : unique_numbers) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "All elements are duplicates." << std::endl;
    }
    
    return 0;
}