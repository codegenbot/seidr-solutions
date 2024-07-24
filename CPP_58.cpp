#include <iostream>
#include <vector>
#include <set>

bool issame(const std::vector<int>& a,const std::vector<int>& b){
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++){
        if(std::find(b.begin(),b.end(),a[i])==b.end())return false;
    }
    return true;
}

std::vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(intersection, intersection.begin()));

    vector<int> result(intersection.begin(), intersection.end());
    sort(result.begin(), result.end());
    return result;
}

int main() {
    std::vector<int> l1 = {1, 2, 3, 4};
    std::vector<int> l2 = {3, 4, 5, 6};

    if(issame(l1,l2)){
        std::cout << "The vectors are the same.\n";
    }else{
        std::cout << "The vectors are not the same.\n";
    }

    return 0;
}