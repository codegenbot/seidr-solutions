#include <vector>
#include <cassert>

bool triples_sum_to_zero(std::vector<int> l) {
    int n = l.size();
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (l[i] + l[j] + l[k] == 0) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    // Example usage
    std::vector<int> nums = {2, 0, -2, 1, -1};
    if (triples_sum_to_zero(nums)) {
        std::cout << "Triple that sums to zero found." << std::endl;
    } else {
        std::cout << "No triple sums to zero." << std::endl;
    }

    return 0;
}