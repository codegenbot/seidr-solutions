#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    for(size_t i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

std::vector<int> make_a_pile(int n){
    std::vector<int> stones{ n };
    for(int i = 1; i < n; ++i){
        n += (n % 2 == 0) ? 2 : 1;
        stones.push_back(n);
    }
    return stones;
}

int main(){
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}