#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    // Your implementation here
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    std::sort(lst.begin(), lst.end());
    int left = 0;
    int right = lst.size() - 1;
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

int main() {
    assert(areSame(strange_sort_list({111111}), {111111}));
    // Your code here
    return 0;
}