#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return a == b;
}

void remove_duplicates(std::vector<int>& numbers) {
    numbers.erase(std::unique(numbers.begin(), numbers.end(), issame), numbers.end());
}

int main() {
    std::vector<int> numbers = {1, 2, 2, 3, 4, 4, 5};
    remove_duplicates(numbers);
    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}