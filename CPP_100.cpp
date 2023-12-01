#include <vector>
#include <iostream>
#include <assert.h>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> make_a_pile(int n);

int main() {
    std::vector<int> expected = {8, 10, 12, 14, 16, 18, 20, 22};
    std::vector<int> result = make_a_pile(8);
    std::cout << (issame(result, expected) ? "Correct" : "Incorrect") << std::endl;

    return 0;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    pile.push_back(n);
    
    for (int i = 1; i < n; i++) {
        if (n % 2 == 0) {
            pile.push_back(n + 2 * i);
        } else {
            pile.push_back(n + 2 * i - 1);
        }
    }
    
    return pile;
}