#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int>& lst) {
    sort(lst.begin(), lst.end());
    int count = 0;
    int prev = lst[0];
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] != prev) {
            count++;
            if (count == 1) {
                return lst[i];
            }
            prev = lst[i];
        }
    }
    return -1;
}

int main() {
    // Add test cases
    assert (next_smallest({-35, 34, 12, -45}) == -35);
    
    return 0;
}