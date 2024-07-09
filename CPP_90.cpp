#include <cassert>
#include <vector>
#include <algorithm>

int next_smallest(vector<int> lst) {
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = sorted.size() - 2; i >= 0; i--) {
        if (sorted[i] < sorted[i + 1]) {
            return sorted[i];
        }
    }
    return -1;

}

int main() {
    int result = next_smallest({-35, 34, 12, -45});
    assert(result == -35);
    return 0;
}