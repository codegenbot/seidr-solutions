#include <vector>
#include <algorithm>

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 1; i < sorted.size(); i++) {
        if (sorted[i] != sorted[0]) return sorted[i];
    }
    return -1; // Return None
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    // Add more test cases or code as needed
    return 0;
}