#include <vector>
#include <algorithm>

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; 
    vector<int> v(lst);
    sort(v.begin(), v.end());
    for(int i = 1; i < v.size(); i++) {
        if(v[i] != v[0]) 
            return v[i];
    }
    return -1; 
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}