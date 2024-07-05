#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

int next_smallest(const vector<int>& lst) {
    if (lst.size() < 2) 
        return -1; // Using -1 to represent None
    sort(lst.begin(), lst.end());
    int smallest = lst[0];
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] > smallest) 
            return lst[i];
    }
    return -1; // If no second smallest element found
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}