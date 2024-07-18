#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst);

int main() {
    std::vector<int> test_input = {4, 2, 7, 1, 5};
    std::vector<int> expected_output = {1, 7, 2, 5, 4};
    
    std::vector<int> result = strange_sort_list(test_input);
    
    assert(result.size() == expected_output.size());
    assert(issame(result, expected_output));
    
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