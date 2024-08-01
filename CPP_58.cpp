#include <vector>
#include <set>

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    std::set<int> s1(l1.begin(), l1.end());
    std::set<int> s2(l2.begin(), l2.end());
    std::set<int> common;
    
    for(auto i : s1){
        if(s2.find(i)!=s2.end())
            common.insert(i);
    }
    
    std::vector<int> result(common.begin(),common.end());
    std::sort(result.begin(),result.end());
    return result;
}