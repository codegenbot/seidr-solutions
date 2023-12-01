#include <vector>
#include <cassert>

int doubleTheDifference(std::vector<float> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0 && floor(lst[i]) == lst[i] && (int)lst[i] % 2 != 0) {
            sum += pow(lst[i], 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.3, 3.0, 4.1, 5.0};
    int odd_sum = doubleTheDifference(lst);
    assert(odd_sum == doubleTheDifference(lst));
    return 0;
}