#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

int next_smallest(const vector<int>& lst) {
    vector<int> sorted_lst = lst; // Make a copy for sorting
    sort(sorted_lst.begin(), sorted_lst.end());
    
    if (sorted_lst.size() < 2) {
        return -1;
    }
    
    int smallest = sorted_lst[0];
    for (auto it = sorted_lst.begin() + 1; it != sorted_lst.end(); ++it) {
        if (*it > smallest) {
            return *it;
        }
    }
    
    return -1;
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    
    return 0;
}