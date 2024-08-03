#include <vector>
#include <cassert>

std::vector<int> pluck(const std::vector<int>& arr){
    return arr;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

int main(){
    assert(issame(pluck({7, 9, 7, 1}), std::vector<int>{}));

    return 0;
}