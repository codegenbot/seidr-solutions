```cpp
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int num = n;
    while (num > 0) {
        if (n % 2 == 1) {
            pile.push_back(2 * num + 1);
        } else {
            pile.push_back(2 * num);
        }
        n /= 2;
        num /= 2;
    }
    return pile;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    // ...
}