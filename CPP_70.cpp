#include <algorithm>
#include <vector>
#include <iostream>
#include <initializer_list>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i]) return false;
    return true;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) {
        return result;
    }
    
    sort(lst.begin(), lst.end());
    result.push_back(*min_element(lst.begin(), lst.end()));
    lst.erase(remove(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())), lst.end());
    
    while (!issame(lst, {}) && !lst.empty()) {
        sort(lst.begin(), lst.end());
        result.push_back(*min_element(lst.begin(), lst.end()));
        lst.erase(remove(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())), lst.end());
        
        if (!lst.empty()) {
            sort(lst.begin(), lst.end());
            result.push_back(*max_element(lst.begin(), lst.end()));
            lst.erase(remove(lst.begin(), lst.end(), *max_element(lst.begin(), lst.end())), lst.end());
        }
    }
    
    return result;
}

int main() {
    std::vector<int> input = {1, 2, 3, 4, 5};
    std::vector<int> output = strange_sort_vector(input);
    for (int i : output) {
        std::cout << i << " ";
    }
    return 0;
}