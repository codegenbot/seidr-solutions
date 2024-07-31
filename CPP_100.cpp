```cpp
#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            pile.push_back(i * 2 - 1);
        } else {
            pile.push_back(i * 2);
        }
    }
    return pile;
}

int main() {
    assert(make_a_pile(4) == vector<int>{1, 3, 5, 7});
    return 0;
}