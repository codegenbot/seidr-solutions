```cpp
#include <iostream>
#include <vector>

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::unordered_map<int, bool> map;
    std::vector<int> result;

    for (int num : numbers) {
        if (!map[num]) {
            map[num] = true;
            result.push_back(num);
        }
    }

    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> numbers(n);
    for (auto &num : numbers) {
        std::cout << "Enter element: ";
        std::cin >> num;
    }

    std::vector<int> result = remove_duplicates(numbers);

    std::cout << "Unique elements are: ";
    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}