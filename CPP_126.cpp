#include <vector>
#include <algorithm>
#include <cassert>

bool is_sorted(const vector<int>& lst) {
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1] || count(lst.begin(), lst.end(), lst[i]) > 1) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    
    assert(is_sorted(numbers) == true);
    
    vector<int> numbers2 = {3, 1, 2, 4, 5};
    
    assert(is_sorted(numbers2) == false);
    
    return 0;
}