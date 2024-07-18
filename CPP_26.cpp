#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1.size() == v2.size() && std::equal(v1.begin(), v1.end(), v2.begin());
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

int main() {
    std::vector<int> numbers = {3, 1, 2, 2, 3, 3, 4, 5, 5};
    
    numbers = remove_duplicates(numbers);
    
    for (int num : numbers) {
        std::cout << num << " ";
    }
    
    return 0;
}