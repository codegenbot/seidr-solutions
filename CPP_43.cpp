#include <vector>
#include <cassert>
#include <cstddef> // Add the missing include

bool pairs_sum_to_zero(std::vector<int> l) {
    for (size_t i = 0; i < l.size(); ++i) {
        for (size_t j = i + 1; j < l.size(); ++j) {
            if (l[i] + l[j] == 0) {
                return true;
            }
        }
    }
    return false;
}

int main() { // Correct the return type of main
    // Fix the assert statement for correct comparison
    assert(pairs_sum_to_zero({-3, 9, -1, 4, 2, -2}) == true);

    return 0;
}