#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> maximum(const std::vector<int>& a, const int value){
    std::vector<int> result = a;
    std::replace_if(result.begin(), result.end(), [&value](const int x) { return x < value; }, value);
    return result;
}

int main(){
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), std::vector<int>{0, 0, 0, 0, 243, 0, 0}));
    return 0;
}