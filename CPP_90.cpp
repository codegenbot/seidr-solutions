#include <vector>

const int None = -1;

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) {
        return None;
    }
    
    sort(lst.begin(), lst.end());
    
    int smallest = lst[0];
    
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] > smallest) {
            return lst[i];
        }
    }
    
    return None;
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    // Additional test cases
    assert(next_smallest({1, 2, 3, 4, 5}) == 2);
    assert(next_smallest({5, 4, 3, 2, 1}) == None);
    assert(next_smallest({10, 20, 30, 40, 50}) == 20);
    assert(next_smallest({-10, -20, -30, -40, -50}) == None);
    
    return 0;
}