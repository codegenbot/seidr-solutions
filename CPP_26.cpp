#include <vector>
#include <unordered_map>
#include <initializer_list>

int main {
    std::vector<int> numbers;
    int num;

    // Add input
    while (true) {
        std::cout << "Enter a number (-1 to stop): ";
        std::cin >> num;
        if (num == -1) {
            break;
        }
        numbers.push_back(num);
    }

    std::vector<int> result = remove_duplicates(numbers);

    // Add output
    for (int num : result) {
        std::cout << "Result: " << num << std::endl;
    }
}

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