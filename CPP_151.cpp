#include <vector>
#include <cmath>
#include <cassert>

int doubleTheDifference(std::vector<float> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0 && std::floor(lst[i]) == lst[i] && (int)lst[i] % 2 != 0) {
            sum += std::pow(lst[i], 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.0, 3.7, 4.0, 5.2};
    int odd_sum = 29;
    assert(doubleTheDifference(lst) == odd_sum);
    return 0;
}