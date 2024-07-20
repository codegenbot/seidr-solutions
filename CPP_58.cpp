```cpp
#include <set>
#include <algorithm>

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                      inserter(intersection, intersection.begin()));

    return vector<int>(intersection.begin(), intersection.end());
}

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    return 0;
}