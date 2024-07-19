```cpp
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

namespace std {
    template<>
        struct hash<int> {
            size_t operator()(int i) const {
                return static_cast<size_t>(i);
            }
        };

    template<>
        bool operator==(const int& a, const int& b) {
            return a == b;
        }

    template<>
        bool operator!=(const int& a, const int& b) {
            return !(a == b);
        }
};

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
    assert(remove_duplicates({1, 2, 3, 2, 4, 3, 5}) == std::vector<int>({1, 2, 3, 4, 5}));

    std::vector<int> input;
    int num;

    std::cout << "Enter numbers (enter -1 to finish):" << std::endl;

    while ((std::cin >> num) && (num != -1)) {
        input.push_back(num);
    }

    std::vector<int> output = remove_duplicates(input);

    std::cout << "Duplicated removed: ";
    for (int i : output) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}