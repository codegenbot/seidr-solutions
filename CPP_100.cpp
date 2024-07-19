#include <vector>

bool issame vector<int> a, vector<int> b){
}

vector<int> make_a_pile(int n){
    vector<int> stones;
    stones.push_back(n);
    for(int i = 2; i <= n; ++i){
        if(n % 2 == 0){
            n += 2;
        } else {
            n += 1;
        }
        stones.push_back(n);
    }
    return stones;
}

int main() {
    assert(make_a_pile(8) == vector<int>{8, 10, 12, 14, 16, 18, 20, 22});
    return 0;
}