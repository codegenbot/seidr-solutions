```c++
#include <vector>
#include <unordered_map>

int main() {
    int size;
    std::cout << "Enter the size of array: ";
    std::cin >> size;

    std::vector<int> numbers(size);
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter element at position " << i << ": ";
        std::cin >> numbers[i];
    }

    std::unordered_map<int, bool> map;
    std::vector<int> result;

    for (int num : numbers) {
        if (!map[num]) {
            map[num] = true;
            result.push_back(num);
        }
    }

    std::cout << "The array after removing duplicates: ";
    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;
}