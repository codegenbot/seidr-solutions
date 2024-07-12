#include <vector>
#include <algorithm>
#include <initializer_list>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::unordered_set<int> seen;
    std::vector<int> result;
    
    for (int num : numbers) {
        if (!seen.count(num)) {
            seen.insert(num);
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