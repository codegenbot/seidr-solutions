#include <vector>
#include <iostream>

std::vector<int> make_a_pile(int n) {
    std::vector<int> stones;
    stones.push_back(n);

    for (int i = 1; i < n; i++) {
        if (n % 2 == 0) {
            n += 2;
        } else {
            n += 1;
        }
        stones.push_back(n);
    }

    return stones;
}

int main() {
    std::vector<int> result = make_a_pile(8);
    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}