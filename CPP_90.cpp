#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    std::sort(lst.begin(), lst.end());
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
    return -1; // return a default value if no unique smallest element found
}

int main() {
    // Sample test case
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    
    return 0;
}