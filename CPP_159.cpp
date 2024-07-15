#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

vector<int> eat(int number, int need, int remaining);

bool issame(vector<int> a, vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + need;
    int eatenCarrots = totalCarrots > remaining ? totalCarrots - remaining : totalCarrots;
    int leftCarrots = remaining > totalCarrots ? 0 : remaining - totalCarrots;
    
    return {eatenCarrots, leftCarrots};
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}