```cpp
#include <vector>
#include <unordered_map>
#include <initializer_list>

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
    int main();
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> result = remove_duplicates(numbers);
    
    for (int num : result) {
        std::cout << num << " ";
    }
    
    return 0;
}