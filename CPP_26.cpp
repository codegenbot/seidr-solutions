#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::unordered_map<int, bool> seen = {};
    std::vector<int> result;

    for (int num : numbers) {
        if (seen.find(num) == seen.end()) {
            seen[num] = true;
            result.push_back(num);
        }
    }

    return result;
}

int main() {
    assert(issame({1, 2, 3, 2, 4, 3, 5}, remove_duplicates({1, 2, 3, 2, 4, 3, 5})) == true);

    std::vector<int> input;
    int num;

    std::cout << "Enter numbers (enter -1 to finish):" << std::endl;

    while ((std::cin >> num) && (num != -1)) {
        input.push_back(num);
    }

    std::vector<int> output = remove_duplicates(input);

    if(issame(output, {1, 2, 3, 4, 5})) {
        std::cout << "Duplicated removed: ";
        for (int i : output) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Failed to remove all duplicates." << std::endl;
    }

    return 0;
}