#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

std::vector<int> unique(std::vector<int> l){
    std::sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end()), l.end());
    return l;
}

int main(){
    assert (issame(unique(std::vector<int>({5, 3, 5, 2, 3, 3, 9, 0, 123})), std::vector<int>({0, 2, 3, 5, 9, 123})));
    std::cout << "Test passed!" << std::endl;
    return 0;
}