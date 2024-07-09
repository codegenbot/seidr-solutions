#include <vector>
#include <set>

std::vector<int> common(std::vector<int> l1,std::vector<int> l2){
    std::set<int> s1(l1.begin(),l1.end());
    std::set<int> s2(l2.begin(),l2.end());
    std::set<int> result;
    
    for(auto i : s1){
        if(s2.find(i) != s2.end()){
            result.insert(i);
        }
    }
    
    std::vector<int> res(result.begin(),result.end());
    sort(res.begin(),res.end());
    return res;
}