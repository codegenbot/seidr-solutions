#include <vector>
#include <cassert>

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    if (total > remaining) {
        return {total, 0};
    } else {
        return {total, remaining - need};
    }
}

int main() {
    assert(issame(eat(4, 5, 1), vector<int>{5, 0}));
    return 0;
}