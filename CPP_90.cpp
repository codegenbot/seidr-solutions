#include <vector>
#include <algorithm>
#include <cassert>

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None or some other value that represents "None" in C++.
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for(int i=0; i<sorted.size()-1; i++) {
        if(sorted[i] != sorted[i+1]) {
            return sorted[i];
        }
    }
    return -1; // Return None or some other value that represents "None" in C++.
}

int main() {
    if (next_smallest({-35, 34, 12, -45}) != -35) {
        assert(0);
    }
    return 0;
}