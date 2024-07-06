#include <vector>
#include <algorithm>
#include <cassert>

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; 
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for(int i=0; i<sorted.size()-1; i++) {
        if(sorted[i] != sorted[i+1]) {
            for(int j=i+1; j<sorted.size(); j++) {
                if(sorted[j] < sorted[i]) return sorted[j];
            }
            return sorted[i+1];
        }
    }
    return -1; 
}

int main() {
    assert (next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}