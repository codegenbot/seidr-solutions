#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> maximum(const std::vector<int>& a, int value){
    std::vector<int> result = a;
    std::replace_if(result.begin(), result.end(), [value](int x) { return x < value; }, value);
    return result;
}

int main(){
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    return 0;
}