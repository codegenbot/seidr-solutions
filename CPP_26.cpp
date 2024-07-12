```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return std::includes(b.begin(), b.end(), a.begin(), a.end());
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::vector<int> result;
    for (int num : numbers) {
        bool isSame = false;
        for (auto& v : result) {
            if (issame({num}, {v})) {
                isSame = true;
                break;
            }
        }
        if (!isSame) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 2, 1};
    std::vector<int> output = remove_duplicates(numbers);
    for (auto num : output) {
        std::cout << num << " ";
    }
    return 0;
}