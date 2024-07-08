#include <algorithm>
#include <vector>

std::vector<int> unique(std::vector<int> l) {
    std::vector<int> result;
    for (int i : l) {
        if (std::find_if(result.begin(), result.end(),
                         [&](int x) { return x == i; }) == result.end())
            result.push_back(i);
    }
    return result;
}