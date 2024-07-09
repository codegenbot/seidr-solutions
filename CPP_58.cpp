#include <vector>
#include <set>

bool issame(int a) {
    if(a%2==0)
        return true;
    else 
        return false;
}

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());
    set<int> result;

    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(result, result.begin()));
    
    return vector<int>(result.begin(), result.end());
}