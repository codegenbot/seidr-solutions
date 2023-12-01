#include <iostream>
#include <vector>
#include <algorithm>

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
    std::vector<int> result = unique({5, 3, 5, 2, 3, 3, 9, 0, 123});
    std::vector<int> expected = {0, 2, 3, 5, 9, 123};
  
    if(issame(result, expected)){
        std::cout << "Test passed!" << std::endl;
    }
    else{
        std::cout << "Test failed!" << std::endl;
    }
    return 0;
}