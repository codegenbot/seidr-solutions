#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> maximum(std::vector<int> a, int b){
    return {}; // return an empty vector for now
}

int main(){
    assert(issame(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, std::vector<int>{0}));
    assert(issame(maximum(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, 0), std::vector<int>{}));
    return 0;
}