#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_count(const std::vector<int>& nums) {
    int evenCount = 0;
    int oddCount = 0;
    
    for (int num : nums) {
        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    return {evenCount, oddCount};
}

int main() {
    assert(issame(even_odd_count({1, 0}), {1, 1}));
    return 0;
}