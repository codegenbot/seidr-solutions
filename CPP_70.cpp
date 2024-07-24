#include <vector>
#include <algorithm>

bool issame(int x, int y) {
    if (x > y)
        return false;
    else if (x < y)
        return false;
    else
        return true;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) {
        return result;
    }
    
    while (!lst.empty()) {
        int min = *min_element(lst.begin(), lst.end());
        int max = *max_element(lst.begin(), lst.end());
        
        if (issame(*min_element(lst.begin(), lst.end()), *max_element(lst.begin(), lst.end()))) {
            result.insert(result.begin(), min);
            lst.clear();
        } else {
            result.push_back(min);
            lst.erase(std::remove(lst.begin(), lst.end(), min), lst.end());
            
            result.push_back(max);
            lst.erase(std::remove(lst.begin(), lst.end(), max), lst.end());
        }
    }
    
    return result;
}

int main() {
    std::vector<int> vec = {5, 2, 3, 4};
    assert(std::equal(strange_sort_list(vec).begin(), strange_sort_list(vec).end(), vec.begin()));
    return 0;
}