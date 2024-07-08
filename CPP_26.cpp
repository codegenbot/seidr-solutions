```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    if (a > b)
        return false;
    else if (b > a)
        return true;
    else
        return true; // in case of equality, they are the same
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 5, 6};
    std::vector<int> result = remove_duplicates(numbers);
    
    for (int num : result) {
        assert(issame(num, find(result.begin(), result.end(), num) - result.begin()));
    }
    return 0;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::vector<int> result;

    for (int num : numbers) {
        if (find(result.begin(), result.end(), num) == result.end()) {
            result.push_back(num);
        }
    }

    return result;
}