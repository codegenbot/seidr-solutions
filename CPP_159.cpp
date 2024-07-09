#include <vector>

bool same(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    assert(same(eat(4, 5, 1) , {5, 0}));
    
    vector<int> eat(int number, int need, int remaining) {
        int total = number + need;
        if (total > remaining) {
            return {total, 0};
        } else {
            return {total, remaining - need};
        }
    }
}