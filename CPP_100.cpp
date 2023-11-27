#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> levels;
    int stones = n;
    for (int i = 0; i < n; i++) {
        levels.push_back(stones);
        if (n % 2 == 0) {
            stones += 2;
        } else {
            stones += 1;
        }
    }
    return levels;
}

int main() {
    std::vector<int> result = make_a_pile(8);
    std::vector<int> expected = {8, 10, 12, 14, 16, 18, 20, 22};
    if (issame(result, expected)) {
        std::cout << "Test case passed!" << std::endl;
    } else {
        std::cout << "Test case failed!" << std::endl;
    }
    return 0;
}