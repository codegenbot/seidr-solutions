#include <vector>
#include <algorithm>
#include <cassert>

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; 
    int result = -1;
    for(int i=0; i<lst.size()-1; i++) {
        if(lst[i] > lst[i+1]) {
            result = lst[i];
            break;
        }
    }
    if(result == -1) {
        result = *min_element(lst.begin(), lst.end());
    }
    return result; 
}

int main() {
    assert (next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}