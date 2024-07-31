#include <algorithm>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> removeDuplicates(std::vector<int> l){
    std::sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end()), l.end());
    return l;
}

int main(){
    std::vector<int> inputVec = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    std::vector<int> expectedVec = {0, 2, 3, 5, 9, 123};
    
    assert(issame(removeDuplicates(inputVec), expectedVec));
    
    return 0;
}