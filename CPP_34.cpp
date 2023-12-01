#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    if(a.size() != b.size()){
        return false;
    }
    std::vector<int> sorted_a = a;
    std::vector<int> sorted_b = b;
    std::sort(sorted_a.begin(), sorted_a.end());
    std::sort(sorted_b.begin(), sorted_b.end());
    return sorted_a == sorted_b;
}

std::vector<int> unique(const std::vector<int>& l){
    std::vector<int> sorted_l = l;
    std::sort(sorted_l.begin(), sorted_l.end());
    sorted_l.erase(std::unique(sorted_l.begin(), sorted_l.end()), sorted_l.end());
    return sorted_l;
}

int main(){
    assert(issame(unique({5, 3, 5, 2, 3, 3, 9, 0, 123}), {0, 2, 3, 5, 9, 123}));
    std::cout << "Test passed!" << std::endl;
    return 0;
}