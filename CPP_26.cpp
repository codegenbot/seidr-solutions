```cpp
#include <iostream>
#include <vector>
#include <set>

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::set<int> seen;
    std::vector<int> result;

    for (int num : numbers) {
        if (!seen.count(num)) {
            seen.insert(num);
            result.push_back(num);
        }
    }

    return result;
}