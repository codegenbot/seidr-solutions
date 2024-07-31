#include <vector>

std::vector<int> eat(int number, int need, int remaining) { 
    int totalCarrots = number + need;
    int eatenCarrots = totalCarrots > remaining ? totalCarrots - remaining : totalCarrots;
    int leftCarrots = remaining >= totalCarrots ? 0 : remaining - number;
    
    return {eatenCarrots, leftCarrots};
}

bool issame(std::vector<int> a, std::vector<int> b) { 
    return a == b;
}

int main() {
    assert (issame(eat(4, 5, 1) , {5, 0}));
    return 0;
}