#include <vector>

struct Result {
    int total;
    int carrotsLeft;
};

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

Result eat(int number, int need, int remaining) {
    int total = number + need;
    int carrotsLeft = std::max(0, remaining - need);
    return Result{total, carrotsLeft};
}

int main() {
    assert(issame({eat(4, 5, 1).total, eat(4, 5, 1).carrotsLeft}, {5, 0}));
    
    return 0;
}