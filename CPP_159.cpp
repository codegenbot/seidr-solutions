#include <vector>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> eat(int number, int need, int remaining) {
    std::vector<int> result;
    int totalEaten = number + remaining;
    int carrotsLeft = 0;
    
    if (totalEaten >= need) {
        carrotsLeft = totalEaten - need;
    }
    
    result.push_back(totalEaten);
    result.push_back(carrotsLeft);
    
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    
    return 0;
}