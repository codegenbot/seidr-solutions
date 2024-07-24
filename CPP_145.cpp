#include <vector>
#include <algorithm>

bool same(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int mainFunction() {
    assert(same({0,6,6,-76,-21,23,4}, { -76, -21, 0, 4, 23, 6, 6}) == true);
    if (!same({0,6,6,-76,-21,23,4}, { -76, -21, 0, 4, 23, 6, 6}))
        return 1; 
    return 0; 
}

bool by_points(vector<int> arr) {
    sort(arr.begin(), arr.end());
    for(int i = 0; i < arr.size() - 1; i++) {
        if(same({arr[i]}, {arr[i+1]}) && (arr[i] > arr[i+1])) return false;
    }
    return true;
}