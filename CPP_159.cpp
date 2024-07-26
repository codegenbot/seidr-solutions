#include <vector>
#include <cassert>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + need;
    int eatenCarrots = (totalCarrots <= remaining) ? totalCarrots : remaining;
    int carrotsLeft = (remaining >= totalCarrots) ? remaining - totalCarrots : 0;
    
    return {eatenCarrots, carrotsLeft};
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    
    return 0;
}