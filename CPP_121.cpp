#include <vector>

int solutions(std::vector<int> lst) {
    int sum = 0;
    for (int i : lst) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    assert(solutions({3, 13, 2, 9}) == 17);
    return 0;
}