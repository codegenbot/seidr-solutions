#include <vector>
#include <cassert>

std::vector<int> intersperse(const std::vector<int>& vec, int val){
    std::vector<int> result;
    for(const auto& num : vec){
        result.push_back(num);
        result.push_back(val);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

int main(){
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    return 0;
}