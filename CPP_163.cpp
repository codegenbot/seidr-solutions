#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> generate_integers(int n){
    std::vector<int> nums;
    for(int i = 1; i <= n; ++i){
        nums.push_back(i);
    }
    return nums;
}

int main(){
    std::vector<int> vec1 = generate_integers(5);
    std::vector<int> vec2 = {1, 2, 3, 4, 5};
    
    assert(issame(vec1, vec2));

    return 0;
}