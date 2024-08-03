#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int totalEatenCarrots = number + min(need, remaining);
    int carrotsLeft = max(0, remaining - need);
    return {totalEatenCarrots, carrotsLeft};
}

bool isSame(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    assert(isSame(eat(4, 5, 1) , {5, 0}));
    return 0;
}