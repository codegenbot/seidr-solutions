#include <vector>
#include <unordered_set>

std::vector<int> unique(std::vector<int> l) {
    std::vector<int> result;
    for (int x : l) {
        if (std::find(result.begin(), result.end(), x) == result.end())
            result.push_back(x);
    }
    return result;
}