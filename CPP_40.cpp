#include <vector>
#include <algorithm>

bool triples_sum_to_zero(const vector<int>& l);

bool triples_sum_to_zero(const vector<int>& l) {
    sort(l.begin(), l.end());
    for (int i = 0; i < l.size() - 2; i++) {
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
    vector<int> input = {3, -1, -7, -4, 2, 9, -6, 8, 1};
    assert(triples_sum_to_zero(input) == true);
    return 0;
}