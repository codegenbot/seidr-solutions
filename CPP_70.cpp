#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> strange_sort_list(std::vector<int> lst){
    sort(lst.begin(), lst.end());
    std::vector<int> result;
    int left = 0, right = lst.size() - 1;
    while (left <= right) {
        if (left == right) {
            result.push_back(lst[left]);
            break;
        }
        result.push_back(lst[left++]);
        result.push_back(lst[right--]);
    }
    return result;
}

int main() {
    std::vector<int> test1 = {9, 2, 7, 5, 6, 3};
    std::vector<int> result1 = strange_sort_list(test1);
    assert(issame(result1, {2, 9, 3, 7, 5, 6}));

    std::vector<int> test2 = {3, 1, 4, 1, 5};
    std::vector<int> result2 = strange_sort_list(test2);
    assert(issame(result2, {1, 5, 1, 4, 3}));

    return 0;
}