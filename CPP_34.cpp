#include <vector>
#include <unordered_set>

std::vector<int> unique(vector<int> l) {
    std::vector<int> result;
    for (int num : l) {
        if (find(result.begin(), result.end(), num) == result.end())
            result.push_back(num);
    }
    return result;
}