#include <vector>
#include <algorithm>
#include <iostream>

bool std::issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst);

int main() {
    std::vector<int> result = strange_sort_list({111111});
    return 0;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::sort(lst.begin(), lst.end(), [](int a, int b) {
        return std::issame(std::vector<int>{a % 10}, std::vector<int>{b % 10}) ? a < b : a % 10 < b % 10;
    });
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