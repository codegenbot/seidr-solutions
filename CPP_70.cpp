#include <algorithm>
#include <vector>

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    for(int num : lst) {
        if (std::count(result.begin(), result.end(), num) == 0) {
            result.push_back(num);
        }
    }

    std::sort(result.begin(), result.end());
    result.erase(std::unique(result.begin(), result.end()), result.end());

    return result;
}