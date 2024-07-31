#include <vector>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> strange_sort_list(std::vector<int> lst) { 
    sort(lst.begin(), lst.end());
    std::vector<int> result;
    int left = 0, right = lst.size() - 1;
    while (left <= right) {
        if (left == right) {
            result.push_back(lst[left]);
            break;
        }
        result.push_back(lst[left]);
        result.push_back(lst[right]);
        left++;
        right--;
    }
    return result;
}