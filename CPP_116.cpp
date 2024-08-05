#include <vector>

std::vector<int> sort_array(std::vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        int count_a = __builtin_popcount(a);
        int count_b = __builtin_popcount(b);
        if (count_a == count_b) {
            return a < b;
        }
        return count_a < count_b;
    });

    return arr;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    // Define the logic to check if vectors a and b are the same
}

int main() {
    assert(issame(sort_array({2, 4, 8, 16, 32}), {2, 4, 8, 16, 32}));
}