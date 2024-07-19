#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst);

int main() {
    std::vector<int> input = {4, 2, 7, 1, 8};
    std::vector<int> expected = {1, 8, 2, 7, 4};
    
    std::vector<int> result = strange_sort_list(input);
    
    assert(issame(result, expected));
    return 0;
}

std::vector<int> strange_sort_list(std::vector<int> lst){
    std::vector<int> result;
    std::sort(lst.begin(), lst.end());
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