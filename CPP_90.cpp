#include <vector>
#include <algorithm>

int next_smallest(vector<int> lst) {
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 1; i < sorted.size(); i++) {
        if (find(lst.begin(), lst.end(), sorted[i]) != lst.end()) {
            return sorted[i];
        }
    }
    return -1; 
}