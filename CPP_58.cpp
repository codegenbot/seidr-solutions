#include <iostream>
#include <vector>
#include <set>

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main(){
    vector<int> l1 = {1, 2, 3};
    vector<int> l2 = {3, 4, 5};
    
    vector<int> common(vector<int> l1, vector<int> l2) {
        set<int> s1(l1.begin(), l1.end());
        set<int> s2(l2.begin(), l2.end());

        set<int> intersection;
        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
            inserter(intersection, intersection.begin()));

        vector<int> result(intersection.begin(), intersection.end());
        return result;
    }
    
    vector<int> res = common(l1,l2);
    for(int i=0; i<res.size(); i++)
        std::cout << res[i] << " ";
    if(issame(l1, l2))
        std::cout << "\nLists are same";
    else
        std::cout << "\nLists are not same";
    
    return 0;
}