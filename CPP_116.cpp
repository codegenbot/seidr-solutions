#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

// Function to sort the array
vector<int> sort_array(vector<int> arr) {
    auto count_ones = [](int x) {
        int count = 0;
        while (x) {
            count += x & 1;
            x >>= 1;
        }
        return count;
    };

    sort(arr.begin(), arr.end(), [&](int a, int b) {
        int ones_a = count_ones(a);
        int ones_b = count_ones(b);
        if (ones_a == ones_b) return a < b;
        return ones_a < ones_b;
    });

    return arr;
}

// Function to compare two vectors
bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

// Main function
int main() {
    assert(issame(sort_array({2, 4, 8, 16, 32}), {2, 4, 8, 16, 32}));
    return 0;
}