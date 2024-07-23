#include <vector>
#include <unordered_map>

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
    std::vector<int> numbers = {1, 2, 3, 4, 5, 5, 6};
    std::vector<int> output = remove_duplicates(numbers);

    for (int num : output) {
        std::cout << num << " ";
    }
    return 0;
}