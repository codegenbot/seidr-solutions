#include <vector>
#include <cassert>

int sumOfOdds(vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    assert(sumOfOdds({3, 13, 2, 9}) == 3);
    return 0;
}