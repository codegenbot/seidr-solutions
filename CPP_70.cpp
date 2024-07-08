#include <vector>

bool is_permutation(const std::vector<int>& a, const std::vector<int>& b) {
    return std::is_permutation(a.begin(), a.end(), b.begin());
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    sort(lst.begin(), lst.end());
    std::vector<int> result;
    int i = 0, j = lst.size() - 1;
    while (i <= j) {
        result.push_back(lst[i]);
        if (i != j) {
            result.push_back(lst[j]);
        }
        i++;
        j--;
    }
    return result;
}

int main() {
    assert(is_permutation(strange_sort_list({111111}), {111111}));
    // Additional test cases
    return 0;
}