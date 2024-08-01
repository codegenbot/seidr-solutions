```cpp
#include <vector>
#include <unordered_set>

std::vector<int> unique(std::vector<int> l) {
    std::vector<int> result;
    for (int i : l) {
        if (std::find(result.begin(), result.end(), i) == result.end())
            result.push_back(i);
    }
    return result;
}