#include <vector>

bool same(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    assert(same(eat(4, 5, 1) , {5, 0}));
}