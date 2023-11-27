#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
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
    // Test the code
    std::vector<int> a = {1, 3, 5};
    std::vector<int> b = make_a_pile(3);
    std::cout << "issame(a, b): " << std::boolalpha << issame(a, b) << std::endl;

    return 0;
}