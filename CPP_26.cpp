#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

int main() {
    std::vector<int> vec = {1, 2, 2, 3, 4, 4, 5};
    
    std::vector<int> unique_vec = remove_duplicates(vec);

    for (int num : unique_vec) {
        std::cout << num << " ";
    }

    return 0;
}