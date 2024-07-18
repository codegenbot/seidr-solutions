#include <vector>
#include <cassert>

int remaining = 5;

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::pair<int, int> eat(int number, int need) {
    int total = number + need;
    int eaten = total > remaining ? remaining : total;
    int left = remaining - eaten;
    return {eaten, left};
}

int main() {
    assert (issame(eat(4, 5), {5, 0}));
    
    return 0;
}