#include <algorithm>
#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    vector<int> result;
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(result));
    
    result.erase(unique(result.begin(), result.end()), result.end());

    return result;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    return issame(l1, l2);
}