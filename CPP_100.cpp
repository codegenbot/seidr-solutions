```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int count = 1;
    while (n > 0) {
        if (n % 2 == 1)
            pile.push_back(count);
        else
            pile.push_back(count + 1);
        count += 2;
        n--;
    }
    return pile;
}