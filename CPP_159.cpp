#include <vector>
#include <array>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

// Define eat function if not already defined
std::array<int, 2> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = total > remaining ? remaining : total;
    int left = remaining - eaten;
    return {eaten, left};
}

int main() {
    assert(issame(eat(4, 5, 1), std::array<int, 2>{5, 0}));
    return 0;
}