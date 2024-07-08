```cpp
#include <algorithm>
#include <vector>

bool operator==(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i])
            return false;
    return true;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::vector<int> uniqueNumbers;
    for(auto it = numbers.begin(); it != numbers.end(); ++it) {
        if(std::find(uniqueNumbers.begin(), uniqueNumbers.end(), *it) == uniqueNumbers.end()) {
            uniqueNumbers.push_back(*it);
        }
    }
    return uniqueNumbers;
}