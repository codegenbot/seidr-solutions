#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    if(a.size() != b.size()){
        return false;
    }
    std::vector<int> sortedA(a);
    std::vector<int> sortedB(b);
    std::sort(sortedA.begin(), sortedA.end());
    std::sort(sortedB.begin(), sortedB.end());
    return sortedA == sortedB;
}

std::vector<int> unique(const std::vector<int>& l){
    std::vector<int> sortedL(l);
    std::sort(sortedL.begin(), sortedL.end());
    sortedL.erase(std::unique(sortedL.begin(), sortedL.end()), sortedL.end());
    return sortedL;
}

int main(){
    assert(issame(unique({5, 3, 5, 2, 3, 3, 9, 0, 123}), {0, 2, 3, 5, 9, 123}));
    std::cout << "Test passed!" << std::endl;
    return 0;
}