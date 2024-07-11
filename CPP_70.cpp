#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::vector<int> input = {3, 1, 4, 1, 5, 9, 2, 6};
    std::vector<int> output = strange_sort_list(input);
    std::vector<int> expected = {1, 6, 1, 5, 2, 4, 3, 9};
    
    assert(issame(output, expected));

    return 0;
}

std::vector<int> strange_sort_list(std::vector<int> lst){
    std::sort(lst.begin(), lst.end());
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