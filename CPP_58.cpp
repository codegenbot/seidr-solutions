#include <set>
#include <algorithm>

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(find(b.begin(),b.end(),a[i]) == b.end()){
            return false;
        }
    }
    return true;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    if(!issame(s1,s2)) return {};

    set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                      std::inserter(intersection, intersection.end()));

    vector<int> result(intersection.begin(), intersection.end());
    return result;
}