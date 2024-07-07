#include <algorithm>
#include <cmath>

int findMax(int l[]) {
    if (l == NULL) {
        return -1;
    }
    
    vector<int> v(l, l + sizeof(l)/sizeof(l[0]));
    return *max_element(v.begin(), v.end());
}