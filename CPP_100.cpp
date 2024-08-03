#include <vector>
#include <cassert>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2){
    return v1 == v2;
}

std::vector<int> make_a_pile(int n);

int main(){
    std::vector<int> result = make_a_pile(5);
    std::vector<int> expected = {5, 7, 9, 11, 13};

    assert(issame(result, expected));
    return 0;
}

std::vector<int> make_a_pile(int n){
    std::vector<int> stones;
    stones.push_back(n);
    for(int i = 1; i < n; ++i){
        if(stones[i-1] % 2 == 0){
            stones.push_back(stones[i-1] + 2);
        } else {
            stones.push_back(stones[i-1] + 1);
        }
    }
    return stones;
}