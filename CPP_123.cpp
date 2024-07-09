#include <vector>
#include <assert.h>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0)
            result.push_back(i);
    }
    return result;
}

int main() {
    std::vector<int> test = get_odd_collatz(6); 
    assert(std::vector<int>({1, 3, 5, 7}) == test);
}