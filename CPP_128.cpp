#include <vector>
#include <cassert>

int prod_signs(std::vector<int> arr) {
    int sum = 0;
    int product = 1;

    if (arr.empty()) {
        return -32768;
    }

    for (int i = 0; i < arr.size(); i++) {
        sum += std::abs(arr[i]);
        product *= (arr[i] >= 0) ? 1 : -1;
    }

    return sum * product;
}

int main() {
    assert(prod_signs({-1, 1, 1, 0}) == 0);
    assert(prod_signs({-5, 2, -3, 4}) == -60);
    assert(prod_signs({0, 0, 0, 0}) == 0);
    assert(prod_signs({-2, -4, -6, -8}) == -120);
    assert(prod_signs({1, 2, 3, 4, 5}) == 120);
    assert(prod_signs({-1, -2, -3, -4, -5}) == -120);
    assert(prod_signs({-1}) == -1);
    assert(prod_signs({0}) == 0);
    assert(prod_signs({1}) == 1);
    assert(prod_signs({}) == -32768);

    return 0;
}