#include <set>
#include <algorithm>
#include <vector>

std::vector<int> common(std::initializer_list<int> l1,std::initializer_list<int> l2){
    std::set<int> s1(l1);
    std::set<int> s2(l2);

    std::vector<int> result;
    for(int i : s1) {
        if(s2.find(i) != s2.end()) {
            result.push_back(i);
        }
    }

    std::sort(result.begin(), result.end());
    return result;
}