#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(const std::vector<int>& lst) {
    std::vector<int> sorted_lst = lst;
    std::sort(sorted_lst.begin(), sorted_lst.end());
    
    int count = 1;
    for (int i = 1; i < sorted_lst.size(); ++i) {
        if (sorted_lst[i] != sorted_lst[i - 1]) {
            count++;
        }
        if (count == 2) {
            return sorted_lst[i];
        }
    }
    return -1;
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    // Add more test cases if needed

    return 0;
}