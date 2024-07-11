#include <vector>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert(issame(f(3), vector<int>{1, 2, 6}));
    return 0;
}