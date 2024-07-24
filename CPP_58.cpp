```
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    std::set<int> s1(l1.begin(), l1.end());
    std::set<int> s2(l2.begin(), l2.end());

    std::set<int> intersection;
    std::set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(intersection, intersection.begin()));

    std::vector<int> result(intersection.begin(), intersection.end());
    std::sort(result.begin(), result.end());
    return result;
}

bool issame(const std::vector<int>& a,const std::vector<int>& b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size();i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    int n,m;
    std::cin >> n >> m;
    std::vector<int> l1(n);
    std::vector<int> l2(m);

    for(int i = 0; i < n;i++) std::cin >> l1[i];
    for(int i = 0; i < m;i++) std::cin >> l2[i];

    if(issame(l1,l2)){
        std::cout << "The lists are same." << std::endl;
    }else{
        std::vector<int> common_list = common(l1, l2);
        for(int i = 0; i < common_list.size();i++) std::cout << common_list[i] << " ";
        std::cout << std::endl;
    }
    return 0;
}