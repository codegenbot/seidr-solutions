#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(issame(std::max({1, 2, 3, -23, 243, -400, 0}), std::vector<int>{}));
    return 0;
}