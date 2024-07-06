```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> uniqueNumbers;
    for (int num : numbers) {
        if (find(uniqueNumbers.begin(), uniqueNumbers.end(), num) == uniqueNumbers.end()) {
            uniqueNumbers.push_back(num);
        }
    }
    return uniqueNumbers;
}