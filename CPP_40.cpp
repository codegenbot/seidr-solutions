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
    // Input vector l
    std::vector<int> l = {1, 2, -3, -1, 0};

    // Call the function and store the result
    bool result = triples_sum_to_zero(l);

    // Assert the result
    assert(result == true);

    return 0;
}