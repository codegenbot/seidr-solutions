#include <algorithm>
#include <vector>

int next_smallest(vector<int> lst){
    if(lst.empty()) return NULL; // Return None (or NULL) if there is no such element.
    vector<int> v = lst;
    sort(v.begin(), v.end());
    for(int i = 1; i < v.size(); i++){
        if(v[i] != v[0]){
            return v[i];
        }
    }
    return NULL; // Return None (or NULL) if there is no such element.
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}