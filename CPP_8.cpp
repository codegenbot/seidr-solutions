#include <vector>
#include <algorithm>
#include <cassert>

bool std::issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> sum_product(std::vector<int> a) {
    int sum = 0;
    int product = 1;
    for (int num : a) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

// int main() {
//     assert(std::issame(sum_product({10}), {10, 10}));
//     return 0;
// }