```cpp
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::vector<int> uniqueNumbers;
    for (int i = 0; i < numbers.size(); i++) {
        bool found = false;
        for (int j = 0; j < uniqueNumbers.size(); j++) {
            if (uniqueNumbers[j] == numbers[i]) {
                found = true;
                break;
            }
        }
        if (!found) {
            uniqueNumbers.push_back(numbers[i]);
        }
    }
    return uniqueNumbers;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 2, 3, 4, 5};
    std::vector<int> result = remove_duplicates(numbers);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}