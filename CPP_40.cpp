#include <vector>
#include <algorithm>
#include <cassert>

bool triples_sum_to_zero(std::vector<int> l) {
    std::sort(l.begin(), l.end());

    for (int i = 0; i < l.size() - 2; ++i) {
        int left = i + 1;
        int right = l.size() - 1;
        while (left < right) {
            int sum = l[i] + l[left] + l[right];
            if (sum == 0) {
                return true;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }
    return false;
}

int main() {
    assert(triples_sum_to_zero({100, 3, 5, -100}) == false);

    return 0;
}