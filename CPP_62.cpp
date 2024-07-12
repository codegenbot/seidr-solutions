#include <vector>
#include <cassert>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main(){
    assert(issame(std::vector<float>({1.0f}), std::vector<float>{}));
    return 0;
}