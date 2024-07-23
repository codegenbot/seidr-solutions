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
    std::vector<int> test1 = {1, 2, 3, 4, 5};
    std::vector<int> test2 = {1, 1, 1, 2, 3};

    std::cout << "Test 1: ";
    for (int num : remove_duplicates(test1)) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Test 2: ";
    for (int num : remove_duplicates(test2)) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}