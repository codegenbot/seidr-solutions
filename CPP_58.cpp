#include <set>
#include <vector>

std::vector<int> common(std::initializer_list<int> l1,std::initializer_list<int> l2){
    std::set<int> s1(l1.begin(), l1.end());
    std::set<int> s2(l2.begin(), l2.end());

    std::vector<int> result;
    for(int i : s1) {
        if(s2.find(i) != s2.end()) {
            result.push_back(i);
        }
    }

    sort(result.begin(), result.end());
    return result;
}