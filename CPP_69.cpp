#include <vector>
#include <algorithm>

int search(const std::vector<int>& lst) {
    int result = -1;
    std::vector<int> unique_nums(lst.begin(), lst.end());
    std::sort(unique_nums.begin(), unique_nums.end());
    unique_nums.erase(std::unique(unique_nums.begin(), unique_nums.end()), unique_nums.end());
    
    for (int num : unique_nums) {
        if (num > 0 && std::count(lst.begin(), lst.end(), num) >= num) {
            result = std::max(result, num);
        }
    }
    return result;
}