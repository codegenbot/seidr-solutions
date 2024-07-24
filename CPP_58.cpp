#include <vector>
#include <set>

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    std::set<int> s1(l1.begin(), l1.end());
    std::set<int> s2(l2.begin(), l2.end());

    std::set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(intersection, intersection.begin()));

    std::vector<int> result(intersection.begin(), intersection.end());
    sort(result.begin(), result.end());
    return result;

bool issame(const vector<int>& a,const vector<int>& b){
    if(a.size()!=b.size())
        return false;
    for(int i=0;i<a.size();i++){
        if(find(b.begin(),b.end(),a[i]) == b.end())
            return false;
    }
    return true;
}