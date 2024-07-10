#include <vector>
#include <cassert>

namespace std {
    bool operator==(const std::vector<int>& a, const std::vector<int>& b){
        return a == b;
    }
}

std::vector<int> intersperse(const std::vector<int>& vec, int val){
    std::vector<int> result;
    for(const auto& num : vec){
        result.push_back(num);
        result.push_back(val);
    }
    return result;
}

int main(){
    assert(std::operator==(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    return 0;
}