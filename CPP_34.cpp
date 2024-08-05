#include <algorithm>
#include <vector>

std::vector<int> solve(const std::vector<int>& l) {
    std::vector<int> temp = l;
    sort(temp.begin(), temp.end());
    temp.erase(std::unique(temp.begin(), temp.end()), temp.end());
    return temp;
}