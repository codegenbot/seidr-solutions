#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(vector<int> lst) {
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2) return -1; 
    for (int i = 0; i < sorted.size()-1; i++) {
        if (sorted[i] != sorted[i+1]) {
            return sorted[i+1];
        }
    }
    return -1; 
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    std::cout << "Output should appear here.\n";
    return 0;
}