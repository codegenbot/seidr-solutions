#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::vector<int> result = get_odd_collatz(10);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}